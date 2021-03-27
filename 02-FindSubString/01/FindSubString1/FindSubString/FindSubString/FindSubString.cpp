// FindSubString.cpp : 定义 DLL 应用程序的导出函数。
//
#pragma comment(lib,"ole32.lib")
#pragma comment(lib,"User32.lib")
#include "stdafx.h"
#include "vccom.h"
#include "IFaString.h"
#include <string.h>

FastString::FastString(char* psz) :m_psz(new char[strlen(psz) + 1])
{
	m_cch = strlen(psz);
	strcpy(m_psz, psz);
}  //分配内存

int __stdcall FastString::Length(void) {
	return m_cch;
}  //计算长度

int __stdcall FastString::Find(char *psz) {
	return 0;
}  

IFastString*__stdcall CreateObject(char*psz) {
	return new FastString(psz);
}


