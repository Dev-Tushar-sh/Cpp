#include<iostream>
using namespace std;

int main()
{
    int spc,starc,rowno,trows=1;
    cout<<"Enter no. of rows - ";
    cin>>trows;
    rowno=1;
    while(rowno<=trows)
    {
        //spaces
        spc=1;
        while(spc<=rowno-1)
        {
            cout<<" ";
            spc++;
        }
        //stars
        starc=1;
        while(starc<=2*(trows-rowno)+1)
        {
            cout<<"*";
            starc++;
        }
        cout<<endl;
        rowno++;
    }
}