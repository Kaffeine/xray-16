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
    size_t Size;
};

class XRCORE_API DirectoryLookup
{
public:
    DirectoryLookup(const char *path = nullptr);
    ~DirectoryLookup();
    bool OpenPath(const char *path);
    void Close();
    bool ReadNext(DirectoryEntry *entry);
    bool HaveNext() const;
private:
    DirectoryLookupPrivate *impl;
};
