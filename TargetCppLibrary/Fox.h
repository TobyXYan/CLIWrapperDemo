#pragma once
#include <windows.h>
#ifndef _FOX_DLL_DECL_
#define _FOX_DLL_DECL_  _declspec(dllimport)
#else
#define _FOX_DLL_DECL_ _declspec(dllexport)
#endif

class Fox
{
public:
	 void _FOX_DLL_DECL_ GetByteList(BYTE* ptrByte );
};