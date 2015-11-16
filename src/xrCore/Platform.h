#ifndef XRCORE_PLATFORM_H
#define XRCORE_PLATFORM_H
#pragma once

#include "_types.h"

#ifdef __GNUC__
#define __cdecl //__attribute__((cdecl))
#define _cdecl __cdecl
#endif

#ifdef _WIN32

#define VC_EXTRALEAN // Exclude rarely-used stuff from Windows headers
#define WIN32_LEAN_AND_MEAN // Exclude rarely-used stuff from Windows headers
#ifndef STRICT
# define STRICT // Enable strict syntax
#endif // STRICT
#define IDIRECTPLAY2_OR_GREATER // ?
#define DIRECTINPUT_VERSION 0x0800 //
#define _CRT_SECURE_NO_DEPRECATE // vc8.0 stuff, don't deprecate several ANSI functions

// windows.h
#ifndef _WIN32_WINNT
# define _WIN32_WINNT 0x0501
#endif

#define XR_EXPORT __declspec(dllexport)
#define XR_IMPORT __declspec(dllimport)

// inline control - redefine to use compiler's heuristics ONLY
// it seems "IC" is misused in many places which cause code-bloat
// ...and VC7.1 really don't miss opportunities for inline :)
#define _inline inline
#define __inline inline
#define IC inline
#ifdef _EDITOR
# define ICF inline
# define ICN
#else
# define ICF __forceinline // !!! this should be used only in critical places found by PROFILER
# define ICN __declspec (noinline)
#endif

#include <time.h>
// work-around dumb borland compiler
#ifdef __BORLANDC__
#define ALIGN(a)

#include <vcl.h>
#include <mmsystem.h>
#include <stdint.h>
#include <assert.h>
#include <utime.h>
#define _utimbuf utimbuf

// function redefinition
#define fabsf(a) fabs(a)
#define sinf(a) sin(a)
#define asinf(a) asin(a)
#define cosf(a) cos(a)
#define acosf(a) acos(a)
#define tanf(a) tan(a)
#define atanf(a) atan(a)
#define sqrtf(a) sqrt(a)
#define expf(a) ::exp(a)
#define floorf floor
#define atan2f atan2
#define logf log
// float redefine
#define _PC_24 PC_24
#define _PC_53 PC_53
#define _PC_64 PC_64
#define _RC_CHOP RC_CHOP
#define _RC_NEAR RC_NEAR
#define _MCW_EM MCW_EM
#else
#define ALIGN(a) __declspec(align(a))
#include <sys\utime.h>
#endif

#define NOGDICAPMASKS
//#define NOSYSMETRICS
#define NOMENUS
#define NOICONS
#define NOKEYSTATES
#define NODRAWTEXT
#define NOMEMMGR
#define NOMETAFILE
#define NOSERVICE
#define NOCOMM
#define NOHELP
#define NOPROFILER
#define NOMCX
#define NOMINMAX
#define DOSWIN32
#define _WIN32_DCOM

#pragma warning(push)
#pragma warning(disable:4005)
#include <windows.h>
#ifndef __BORLANDC__
#include <windowsx.h>
#endif
#pragma warning(pop)

#elif defined(__linux__) || defined(__linux)

#ifndef _alloca
#include <alloca.h>
#define _alloca alloca
#endif

#include <string>
#include <unistd.h>

#define XR_EXPORT __attribute__((visibility("default")))
#define XR_IMPORT __attribute__((visibility("default")))

// inline control - redefine to use compiler's heuristics ONLY
// it seems "IC" is misused in many places which cause code-bloat
#define _inline inline
#define __inline inline
#define IC inline
#ifdef _EDITOR
# define ICF inline
# define ICN
#else
# define ICF inline __attribute__((always_inline)) // !!! this should be used only in critical places found by PROFILER
# define ICN __attribute__((noinline))
#endif

#define ALIGN(a) __attribute__ ((aligned (a)))

#define _stdcall
#define _fastcall

#define __stdcall
#define __fastcall

#define _copysign copysign

inline void _splitpath (
   const char *path,  // Path Input
   char *drive,       // Drive     : Output
   char *dir,         // Directory : Output
   char *fname,       // Filename  : Output
   char *ext          // Extension : Output
) {
    
    
    printf("%s\n", path);
}

#include <SDL2/SDL_filesystem.h>

#define CONFIG_USE_SDL

inline void GetCurrentDirectory(int bufferSize, char *buffer)
{
    getcwd(buffer, bufferSize);
}

inline void GetApplicationDirectory(int bufferSize, char *buffer)
{    
    char *basePath = SDL_GetBasePath();
    strcpy(buffer, basePath);
    SDL_free(basePath);
}

inline int GetModuleHandle(char *name) { return 0; }
inline void GetModuleFileName(int handle, char *buffer, int size) { }
inline void GetUserName(LPTSTR buffer, LPDWORD size) { }
inline void GetComputerName(LPTSTR buffer, LPDWORD size) { }

inline bool IsDebuggerPresent() { return false; }

#define O_BINARY 0

#define _write fwrite

inline void *_expand(void *memblock, size_t size) { return nullptr; }
inline int _msize(void *memblock) { return 0; }

#define _M_AMD64

#else
#  error "The project is not ported to the target platform"
#endif

#endif // XRCORE_PLATFORM_H
