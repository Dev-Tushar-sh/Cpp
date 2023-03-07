/*

1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5

*/
#include<iostream>
using namespace std;
int main()
{
    int rowno,trows;
    cout<<"enter row no. - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        for(int i=1;i<=trows;i++)
        {
            if(i<=rowno)
              cout<<rowno;
            else
            cout<<i;

        }

        cout<<endl;
    }
}