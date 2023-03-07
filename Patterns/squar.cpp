/*
   *
  ***
 *****
*******
 *****
  ***
   *
*/
#include<iostream>
using namespace std;
int main()
{
    int starc1,starc2,rowno,trows,spc1,spc2,trow1,trow2;
    cout<<"Enter odd no. of rows - ";
    cin>>trows;
    //1st part
    trow1=trows/2 +1;
    // now total rows whould be half +1  and rows start from 1 to 4
    rowno=1;
    while(rowno<=trow1)
    {
        //space 1
        spc1=1;
        while(spc1<=trow1-rowno)
        {
           cout<<"   ";
           spc1++;
        }
        //star 1
        starc1=1;
        while(starc1<=2*rowno-1)
        {
           cout<<"*  ";
           starc1++;
        }
         cout<<endl;
         rowno++;
    }
    //2nd part
    // here rows start from 1 to 3 and total rows would be 3(7-4)
    trow2 = (trows - trow1);
    rowno = 1;
    while(rowno<=trow2)
    {
        //space 2
        spc2=1;
        while(spc2<=rowno)
        {
           cout<<"   ";
           spc2++;
        }
        //star 2
        starc2=1;
        while(starc2 <= 2*(trow2-rowno)+1)
        {
           cout<<"*  ";
           starc2++;
        }
        cout<<endl;
        rowno++;
    }
    return 0;
}