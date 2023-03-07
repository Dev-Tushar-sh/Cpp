#include<iostream>
using namespace std;

int main()
{
    int rowno=1,i=1;
    int trow;
    cout<<"Enter no. of Rows - ";
    cin>>trow;
    while(rowno<=trow)
    {
        i=1;
        while(i<=rowno)
        {
            cout<<"*";
            i=i+1;
        }
        cout<<endl;
        rowno=rowno+1;    
    }
}