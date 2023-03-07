/*

    *****
   *   *
  *   *
 *   *
*****

*/
#include<iostream>
using namespace std;

int main()
{
   int starc=1,spc1=1,spc2=1,trows=1,rowno,starc1=2,starc2=1,cspc;
   cout<<"enter no. of rows - ";
   cin>>trows;

//row no. 1
   
    //spaces
    spc1=1;
     while(spc1<=(trows-1))
     {
        cout<<" ";
        spc1++;
     }

    //stars
    starc1=1;
     while(starc1<=trows)
     {
        cout<<"*";
        starc1++;
     }
   cout<<endl;

//middle rows 
   rowno=1;
   while(rowno<=(trows-2))
   {
    //spaces
    spc2=1;
    while(spc2<=(trows-2)-(rowno-1))
    {
       cout<<" ";
       spc2++;
    }
    
    //star
    cout<<"*";
    
    //constant spaces
    cspc=1;
    while(cspc<=(trows-2))
    {
        cout<<" ";
        cspc++;
    }
    //star
    cout<<"*";
    
    cout<<endl;
    rowno++;
   }
   
//last row
   
    //stars
    starc2=1;
    while(starc2<=trows)
    {
       cout<<"*";
       starc2++;
    }

   return 0;
}