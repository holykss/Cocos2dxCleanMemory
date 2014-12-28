#ifndef __MAIN_H__
#define __MAIN_H__

#if defined _DEBUG && defined _WIN32
# define _CRTDBG_MAP_ALLOC
# include <crtdbg.h>
# define DEBUG_CLIENTBLOCK   new( _CLIENT_BLOCK, __FILE__, __LINE__)
# define new DEBUG_CLIENTBLOCK
#endif

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Header Files:
#include <windows.h>
#include <tchar.h>

// C RunTime Header Files
#include "CCStdC.h"

#endif    // __MAIN_H__
