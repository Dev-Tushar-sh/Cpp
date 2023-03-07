/*
 5 4 3 2 1 0 1 2 3 4 5
   4 3 2 1 0 1 2 3 4 
     3 2 1 0 1 2 3 
       2 1 0 1 2 
         1 0 1 
           0 
         1 0 1 
       2 1 0 1 2 
     3 2 1 0 1 2 3 
   4 3 2 1 0 1 2 3 4 
 5 4 3 2 1 0 1 2 3 4 5

*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows,k,l;
    cout<<"enter row no. - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
      //spaces
      for(int i=1;i<=rowno-1;i++)
          cout<<"  ";
      
      //numbers
      k=(trows+1)-rowno;
      for(int j=1;j<=trows - (rowno-1);j++)
      {
        cout<<k<<" ";
        k--;
      }
      cout<<"0 ";

      //2nd pattern
      for(int i=1;i<=trows-(rowno-1);i++)
        cout<<i<<" ";
      cout<<endl;
    }
    //middle zero
    for(int i=1;i<=trows;i++)
        cout<<"  ";
    cout<<"0 ";
    cout<<endl;
    //lower part   
    for(rowno=1;rowno<=trows;rowno++)
    {
        
        //spaces
        for(int i=1;i<=trows-rowno;i++)
            cout<<"  ";
        
        //mirror stairs
        l=rowno;
        for(int j=1;j<=rowno;j++)
        {
           cout<<l<<" ";
           l--;
        }
        
        //0
        cout<<"0 ";
       
        //stair
        for(int j=1;j<=rowno;j++)
         cout<<j<<" ";
        cout<<endl;
    }

}