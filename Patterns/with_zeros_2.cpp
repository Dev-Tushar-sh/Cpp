/*
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5
*/
#include <iostream>
using namespace std;

int main()
{
   int rowno,trows;
   cout<<"enter no of rows - ";
   cin>>trows;

   for(rowno=1;rowno<=trows;rowno++)
   {
      if(rowno==1)
        cout<<"1    ";
    else
    {
        for(int j=1;j<=rowno;j++)
        {
            if(j==1 || j==rowno)
              cout<<rowno<<"    ";
            else
              cout<<"0    ";
        }
    }
      cout<<endl;
   }
}