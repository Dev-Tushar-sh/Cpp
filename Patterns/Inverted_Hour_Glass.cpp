/*5

5                   5 
5 4               4 5 
5 4 3           3 4 5 
5 4 3 2       2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2 1 0 1 2 3 4 5 
5 4 3 2 1   1 2 3 4 5 
5 4 3 2       2 3 4 5 
5 4 3           3 4 5 
5 4               4 5 
5                   5 

*/ 
#include<iostream>
using namespace std;

int main()
{
   int trows,rowno;
   cout<<"entr rowno = ";
   cin>>trows;
   int l;
   for(rowno=1;rowno<=trows;rowno++)
   {
      l=trows;
      //1st part
      for(int i=1;i<=rowno;i++)
      {
        cout<<l<<" ";
        l--;
      }
      //2nd part
      for(int i=1;i<=2*(trows-rowno)+1;i++)
      {
        cout<<"  ";
      }
      //3rd part
      l=l+1;
      for(int i=1;i<=rowno;i++)
      {
        cout<<l<<" ";
        l++;
      }
      cout<<endl;
   }

      //Middle line
      l=trows;
      for(int i=1;i<=2*trows+1;i++)
      {
        if(i<=trows)
        { 
            cout<<l<<" ";
             l--;
        }
        else
        {cout<<l<<" ";l++;}

      }
      cout<<endl;

   for(rowno=trows;rowno>=1;rowno--)
   {
      l=trows;
      //1st part
      for(int i=1;i<=rowno;i++)
      {
        cout<<l<<" ";
        l--;
      }
      //2nd part
      for(int i=1;i<=2*(trows-rowno)+1;i++)
      {
        cout<<"  ";
      }
      //3rd part
      l=l+1;
      for(int i=1;i<=rowno;i++)
      {
        cout<<l<<" ";
        l++;
      }
      cout<<endl;
   }

}

