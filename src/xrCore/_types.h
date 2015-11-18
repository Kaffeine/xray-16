#ifndef TYPES_H
#define TYPES_H

#ifdef __linux__
#include <linux/limits.h>
#include <pthread.h>

#define _MAX_PATH PATH_MAX
#endif

// Type defs
typedef signed char s8;
typedef unsigned char u8;

typedef signed short s16;
typedef unsigned short u16;

typedef signed int s32;
typedef unsigned int u32;

#if defined(_WIN32) && !defined(__GNUC__)
typedef signed __int64 s64;
typedef unsigned __int64 u64;
#else
typedef long long s64;
typedef unsigned long long u64;
#endif

typedef float f32;
typedef double f64;

typedef char* pstr;
typedef const char* pcstr;

#if defined(_WIN32)
typedef u32 threadId_t;
#else
typedef pthread_t threadId_t;
#endif

// windoze stuff
#ifndef _WINDOWS_
typedef int BOOL;
typedef pstr LPSTR;
typedef pcstr LPCSTR;
typedef unsigned char BYTE;
typedef unsigned int UINT;

typedef unsigned short WORD;
typedef unsigned long DWORD;

typedef void* HMODULE;
typedef void* LPVOID;

typedef int HWND;
typedef long HRESULT;
typedef long _W64;

typedef struct _RECT {
  long left;
  long top;
  long right;
  long bottom;
} RECT, *PRECT;

typedef struct tagPOINT {
  long x;
  long y;
} POINT, *PPOINT;

#define TRUE true
#define FALSE false
#endif

// Type limits
#define type_max(T) (std::numeric_limits<T>::max())
#define type_min(T) (-std::numeric_limits<T>::max())
#define type_zero(T) (std::numeric_limits<T>::min())
#define type_epsilon(T) (std::numeric_limits<T>::epsilon())

#define int_max type_max(int)
#define int_min type_min(int)
#define int_zero type_zero(int)

#define flt_max type_max(float)
#define flt_min type_min(float)
//#define FLT_MAX 3.402823466e+38F /* max value */
//#define FLT_MIN 1.175494351e-38F /* min positive value */
#define FLT_MAX flt_max
#define FLT_MIN flt_min

#define flt_zero type_zero(float)
#define flt_eps type_epsilon(float)

#define dbl_max type_max(double)
#define dbl_min type_min(double)
#define dbl_zero type_zero(double)
#define dbl_eps type_epsilon(double)

typedef char string16[16];
typedef char string32[32];
typedef char string64[64];
typedef char string128[128];
typedef char string256[256];
typedef char string512[512];
typedef char string1024[1024];
typedef char string2048[2048];
typedef char string4096[4096];

typedef char string_path[2 * _MAX_PATH];

#endif