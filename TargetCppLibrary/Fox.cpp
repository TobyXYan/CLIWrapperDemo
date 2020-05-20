#include "pch.h"
#include "Fox.h"

void Fox::GetByteList(BYTE* ptrByte)
{
	for(int i = 0; i<10;i++)
		*(ptrByte+i) = i;

}