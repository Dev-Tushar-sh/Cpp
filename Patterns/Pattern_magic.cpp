/*5

*********
**** ****
***   ***
**     **
*       *
**     **
***   ***
**** ****
*********

*/
#include<iostream>
using namespace std;
int main()
{
    int trows,rowno;
    cout<<"enter row number - ";
    cin>>trows;
    //1st line
    for(rowno=1;rowno<=2*trows-1;rowno++)
    { 
        cout<<"*";
    }
    cout<<endl;
    for(rowno=1;rowno<=trows-2;rowno++)
    {
    //2 3 4 line
       //stars
       for(int i=1;i<=(trows-2)+2 -rowno;i++)
       {
          cout<<"*";
       }
       //spaces
       for(int i=1;i<=2*rowno - 1;i++)
       {
          cout<<" ";
       }
       //stars
       for(int i=1;i<=(trows-2)+2 -rowno;i++)
       {
          cout<<"*";
       }
       cout<<endl;
    }
   
    //middle line
    for(int i=1;i<=2*trows-1;i++)
    {
        if(i==1 or i==2*trows-1)
        cout<<"*";
        else
        cout<<" ";
    }
    cout<<endl;
    //lower part
    for(rowno=trows-2;rowno>=1;rowno--)
    {
        //2 3 4 line
       //stars
       for(int i=1;i<=(trows-2)+2 -rowno;i++)
       {
          cout<<"*";
       }
       //spaces
       for(int i=1;i<=2*rowno-1;i++)
       {
          cout<<" ";
       }
       //stars
       for(int i=1;i<=(trows-2)+2 -rowno;i++)
       {
          cout<<"*";
       }
       cout<<endl;

    }
    //last line
    for(rowno=1;rowno<=2*trows-1;rowno++)
    { 
        cout<<"*";
    }

}