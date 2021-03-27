//---------------------------------------------------------------------------

#pragma hdrstop
#include <iostream>
#include "IFaString.h"
using namespace std;
//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{
        IFastString * pf=CreateObject("fdfd33e");
        cout<<pf->Length()<<endl;
        cout<<"ok";
        return 0;
}
//---------------------------------------------------------------------------
 