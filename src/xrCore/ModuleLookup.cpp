#include "stdafx.h"

#include "ModuleLookup.hpp"

#ifdef CONFIG_USE_SDL
#include <SDL2/SDL_loadso.h>
#else
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

namespace XRay {
HMODULE LoadLibrary(const char *libraryFileName, bool log)
{
    if (log)
        Log("Loading DLL:", libraryFileName);
#ifdef CONFIG_USE_SDL
    return (HMODULE) SDL_LoadObject(libraryFileName);
#else
    return ::LoadLibraryA(libraryFileName);
#endif
}

void UnloadLibrary(HMODULE libraryHandle)
{
#ifdef CONFIG_USE_SDL
    SDL_UnloadObject(libraryHandle);
#else
    FreeLibrary(libraryHandle);
#endif
}

void *GetProcAddress(HMODULE libraryHandle, const char *procName)
{
#ifdef CONFIG_USE_SDL
    return SDL_LoadFunction(libraryHandle, procName);
#else
    return ::GetProcAddress(libraryHandle, procName);
#endif
}

}
