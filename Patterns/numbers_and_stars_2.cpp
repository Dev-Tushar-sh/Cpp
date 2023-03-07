/*

1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *

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
        for(int i=1;i<=trows-(rowno-1);i++)
        {
            cout<<i<<" ";
        }
        //stars
        for(int j=1;j<=2*rowno-3;j++)
        {
            if(j<0)
            {
                continue;
            }
            else
               cout<<"* ";
        }
        cout<<endl;
    }
}