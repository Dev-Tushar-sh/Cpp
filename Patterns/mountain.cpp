/*4

1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1

*/
#include<iostream>
using  namespace std;

int main()
{
    int trows,rowno,l;
    cout<<"enter no. of rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows-1;rowno++)  //now for this loop trows is 3 mind me
    { 
        //1st part
        for(int numc=1;numc<=rowno;numc++)
        {
            //numbers
            cout<<numc<<"    ";

        }
        //2nd part
        for(int numc=1;numc<=(2*((trows-1)-rowno)+1);numc++)
        {
            //numbers
            cout<<"     ";
        }
        //3rd part
        l=rowno;
        for(int numc=1;numc<=rowno;numc++)
        {
            //numbers
            cout<<l<<"    ";
            l--;
        }
         cout<<endl;

        }
        //last line
        l=1;
     for(int i=1;i<=2*trows-1;i++)
        {
            if(i<trows)
              {
                cout<<l<<"    ";
                l++;
              }
              else
              {
                cout<<l<<"    ";
                l--;
              }

        }
}