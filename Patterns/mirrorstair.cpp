#include<iostream>
using namespace std;

int main()
{
    int starc,trows=1,spc,rowno;
    cout<<"Enter no. of rows - ";
    cin>>trows;
   rowno = 1;
    while(rowno<=trows)
    {//space
        spc=1;
        while(spc<=trows-rowno)
        {
           cout<<" ";
           spc=spc+1;
        }
      //stars
        starc=1;
        while(starc<=rowno)
        {
            cout<<"*";
            starc=starc+1;
        }
        cout<<endl;
        rowno=rowno+1;
    }
}