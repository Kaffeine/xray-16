#pragma once

class DirectoryLookupPrivate;

struct XRCORE_API DirectoryEntry
{
    enum EntryType {
        Directory,
        File
    };

    string_path Name;
    EntryType Type;
    bool Hidden;
    time_t TimeWrite;
};

class XRCORE_API DirectoryLookup
{
public:
    DirectoryLookup(const char *path);
    ~DirectoryLookup();
    bool ReadNext(DirectoryEntry *entry);
    bool HaveNext();
private:
    DirectoryLookupPrivate *impl;
};
