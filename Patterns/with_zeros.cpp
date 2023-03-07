/*
1
11
202
3003
40004
*/
#include <iostream>
using namespace std;

int main()
{
   int rowno,trows,i=1;
   cout<<"enter no of rows - ";
   cin>>trows;

   for(rowno=1;rowno<=trows;rowno++)
   {
      if(rowno==1)
        cout<<"1";
    else
    {
        for(int j=1;j<=rowno;j++)
        {
            if(j==1 || j==rowno)
              cout<<i;
            else
              cout<<"0";
        }
        i++;
    }
      cout<<endl;
   }
}
