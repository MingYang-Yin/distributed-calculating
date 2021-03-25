//---------------------------------------------------------------------------

#pragma hdrstop
#include <iostream>
#include <Windows.h>
#include "mangle.h"
using namespace std;
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        typedef int ( * MYFUN)(void);
        MYFUN myf;        HANDLE h=LoadLibrary("mangle.dll");        myf=(MYFUN)GetProcAddress(h,"myfun");        int res=(*myf)(); //»òres=myf();        cout<<res;        return 0;
}
//---------------------------------------------------------------------------
 