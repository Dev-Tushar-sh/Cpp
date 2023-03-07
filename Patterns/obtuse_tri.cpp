/*
Enter size: 9

  *
   * *
    *   *
     *     *
      *********

*/
#include<iostream>
using namespace std;

int main()
{
  int rowno,trows;
  cout<<"Enter no of rows - ";
  cin>>trows;
  for(rowno=1;rowno<=trows/2 + 1;rowno++)
  {
    for(int spc=1;spc<=rowno;spc++)
    {
        cout<<" ";
    }
    for(int starc=1;starc<=rowno*2-1;starc++)
    {
      if(rowno==trows/2+1)
      cout<<"*";
      else if(starc==1 or starc==rowno*2-1)
      {
        cout<<"*";
      }
      else
         cout<<" ";
    }
    cout<<endl;
  }
}