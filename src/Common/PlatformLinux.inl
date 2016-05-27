
#define CONFIG_USE_SDL

#include <string>
#include <alloca.h>

#define _alloca alloca

#define WINAPI __stdcall

#define _cdecl
#define _stdcall
#define _fastcall

#define __cdecl
#define __stdcall
#define __fastcall

#define _copysign copysign

inline pthread_t GetCurrentThreadId()
{
    return pthread_self();
}
