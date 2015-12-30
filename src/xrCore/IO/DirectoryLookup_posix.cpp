#include "xrCore/xrCore.h"

#include <dirent.h>

class DirectoryLookupPrivate {
public:
    DirectoryLookupPrivate(const char *path) : dir(nullptr), nextEntry(nullptr) { }
    DIR *dir;
    dirent *nextEntry;
};

DirectoryLookup::DirectoryLookup(const char *path) :
    impl(new DirectoryLookupPrivate())
{
    if (path) {
        OpenPath(path);
    }
}

DirectoryLookup::~DirectoryLookup()
{
    Close();
    delete impl;
}

bool DirectoryLookup::OpenPath(const char *path)
{
    Close();
    if (path)
        impl->dir = opendir(path);

    return impl->dir;
}

void DirectoryLookup::Close()
{
    if (!impl->dir)
        return;
        
    closedir(impl->dir);
    impl->dir = nullptr;
}

bool DirectoryLookup::ReadNext(DirectoryEntry *entry)
{
    if (!HaveNext())
        return false;
    
    xr_strcpy(entry->Name, impl->nextEntry->d_name);
    if (impl->nextEntry->d_type & DT_DIR)
        entry->Type = DirectoryEntry::Directory;
    else
        entry->Type = DirectoryEntry::File;
    
    entry->Hidden = entry->Name[0] == '.';
    entry->TimeWrite = 0;
    entry->Size = 0;
    impl->nextEntry = nullptr;
        
    return true;
}

bool DirectoryLookup::HaveNext() const
{
    if (!impl->dir)
        return false;
    
    if (impl->nextEntry)
        return true;
    
    impl->nextEntry = readdir(impl->dir);
    return impl->nextEntry;
}
