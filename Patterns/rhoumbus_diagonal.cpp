/*odd 9

    *    
   ***
  * * *
 *  *  *
*********
 *  *  *
  * * *
   ***
    *

*/
#include<iostream>
using namespace std;
int main()
{
    int trows=9,rowno;
    cout<<"enter no of rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows/2+1;rowno++)
    {
        for(int spc=1;spc<=(trows/2+1)-rowno;spc++)
        {
            cout<<" ";
        }
        for(int starc=1;starc<=2*rowno-1;starc++)
        {
            if(rowno==trows/2+1)
            cout<<"*";
            else if(starc==2*rowno-1 or starc==1 or starc == (2*rowno-1)/2+1)
            cout<<"*";
            else
            cout<<" ";
        }
       cout<<endl;
    }
    for(rowno=trows/2;rowno>=1;rowno--)
    {
        for(int spc=1;spc<=(trows/2+1)-rowno;spc++)
        {
            cout<<" ";
        }
        for(int starc=1;starc<=2*rowno-1;starc++)
        {
            if(starc==2*rowno-1 or starc==1 or starc == (2*rowno-1)/2+1)
            cout<<"*";
            else
            cout<<" ";
        }
       cout<<endl;

    }
}