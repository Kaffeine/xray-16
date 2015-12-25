#include "stdafx.h"

#pragma warning(disable:4995)
#include <direct.h>
#include <fcntl.h>
#include <sys\stat.h>
#pragma warning(default:4995)

class DirectoryLookupPrivate {
public:
    DirectoryLookupPrivate(const char *path) : next(false)
    {
        handle = _findfirst(path, &findData);
    }
    ~DirectoryLookupPrivate()
    {
        if (handle != -1) {
            _findclose(handle);
        }
    }

    intptr_t handle;
    _finddata_t findData;
    bool next;
};

DirectoryLookup::DirectoryLookup(const char *path) :
    impl(new DirectoryLookupPrivate(path))
{
}

DirectoryLookup::~DirectoryLookup()
{
    delete impl;
}

bool DirectoryLookup::ReadNext(DirectoryEntry *entry)
{
    if (!HaveNext()) {
        return false;
    }

    xr_strcpy(entry->name, impl->findData.name);
    if (impl->findData.attrib&_A_SUBDIR) {
        entry->type = DirectoryEntry::Directory;
    } else {
        entry->type = DirectoryEntry::File;
    }

    entry->hidden = impl->findData.attrib & _A_HIDDEN;
    entry->TimeWrite = impl->findData.time_write;

    impl->next = false;

    return true;
}

bool DirectoryLookup::HaveNext()
{
    if (impl->handle < 0) {
        return false;
    }

    if (impl->next) {
        return true;
    }

    impl->next = _findnext(impl->handle, &impl->findData) != -1;

    return impl->next;
}
