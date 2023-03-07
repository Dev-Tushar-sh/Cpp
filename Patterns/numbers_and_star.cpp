/*
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567
*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows;
    cout<<"enter no. of rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        //numbers
        for(int i=1;i<=rowno;i++)
            cout<<i;
        //stars
        for(int j=1;j<=trows-rowno;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}