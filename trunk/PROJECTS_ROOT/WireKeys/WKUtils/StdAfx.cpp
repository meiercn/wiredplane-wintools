// stdafx.cpp : source file that includes just the standard includes
//	WKUtils.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
//#include <winspool.h>
extern "C" __declspec( dllexport )
BOOL WINAPI ClosePrinter(HANDLE hPrinter)
{
	return FALSE;
}

extern "C" __declspec( dllexport )
LONG WINAPI DocumentPropertiesA(HWND,HANDLE,LPTSTR,PDEVMODE,PDEVMODE,DWORD)
{
	return 0;
}

typedef struct _PRINTER_DEFAULTSA{
	LPSTR pDatatype;
    LPDEVMODEA pDevMode;
    ACCESS_MASK DesiredAccess;
} PRINTER_DEFAULTSA, *PPRINTER_DEFAULTSA, *LPPRINTER_DEFAULTSA;

extern "C" __declspec( dllexport )
BOOL WINAPI OpenPrinterA(LPTSTR,LPHANDLE,LPPRINTER_DEFAULTSA)
{
	return FALSE;
}

extern "C" __declspec( dllexport )
BOOL WINAPI GetJobA( IN HANDLE, IN DWORD,IN DWORD,OUT LPBYTE,IN DWORD,OUT LPDWORD)
{
	//GetJob
	return FALSE;
}

#ifndef _VC6
extern "C" { FILE _iob[3] = {__iob_func()[0], __iob_func()[1], __iob_func()[2]}; }
#endif