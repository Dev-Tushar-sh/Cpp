#include<iostream>
using namespace std;

int main()
{
    int rowno,trows=1,spc,starc;
    cout<<"#Enter no. of Rows - ";
    cin>>trows;
    rowno=1;
    while(rowno<=trows)
    {
        //sppaces
        spc=1;
        while(spc<=trows-rowno)
        {
            cout<<"  ";
            spc++;
        }
        //stars
        starc=1;
        while(starc<=(2*rowno-1))
        {
            cout<<"* ";
            starc++;
        }
        cout<<endl;
        rowno++;
    }
}