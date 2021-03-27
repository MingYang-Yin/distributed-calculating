#pragma once
#include <iostream>
using namespace std;
class __declspec(dllexport) IFastString {
public:
	//IFastString(void);
	//~IFastString(void);
	virtual int __stdcall Length(void) = 0;
	virtual int __stdcall Find(char*psz) = 0;

};

extern "C" __declspec(dllexport) IFastString* __stdcall CreateObject(char *psz);
