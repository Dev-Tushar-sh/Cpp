/*

Enter number of rows: 5

         *  
       *   *
     *       *
   *           *
 * * * * * * * * *

*/
#include<iostream>
using namespace std;
int main()
{
      int trows=5,rowno;
    cout<<"Enter no of rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        for(int spc=1;spc<=trows-rowno;spc++)
        {
            cout<<"  ";
        }
        for(int starc=1;starc<=2*rowno-1;starc++)
        {
            if(rowno==trows)
            {cout<<"* ";continue;}
            else if(starc==1 or starc==2*rowno-1)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
    }

}