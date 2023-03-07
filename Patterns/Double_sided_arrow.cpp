/*odd 7
            1  
        2 1   1 2 
    3 2 1       1 2 3 
4 3 2 1           1 2 3 4 
    3 2 1       1 2 3 
        2 1   1 2 
            1 

*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows;
    cout<<"#Enter odd no. of Rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows-1;rowno++)
    {
        cout<<" ";
    }
    cout<<"1"<<endl;

    for(rowno=2;rowno<=trows/2+1;rowno++)
    {
        //spaces 
        for(int spc=1;spc<=2*(trows/2 +1)-(2*rowno);spc++)
        {
            cout<<" ";
        }
        //number --
        for(int numc=rowno;numc>=1;numc--)
        {
           cout<<numc;
        }
        //spaces   rowno start from 2 but to make eq easier we start rowno from 1 for this only
        for(int spc=1;spc<=2*(rowno-1)-1;spc++)
        {
            cout<<" ";
        }
        //number
        for(int numc=1;numc<=rowno;numc++)
        {
            cout<<numc;
        }
        cout<<endl;
    }

    for(rowno=trows/2;rowno>=2;rowno--)
    {     
        //spaces
        for(int spc=1;spc<=2*(trows/2 +1)-(2*rowno);spc++)
        {
            cout<<" ";
        }
        //number --
        for(int numc=rowno;numc>=1;numc--)
        {
           cout<<numc;
        }
        //spaces  rowno start from 2 but to make eq easier we start rowno from 1 for this only
        for(int spc=1;spc<=2*(rowno-1)-1;spc++)
        {
            cout<<" ";
        }
        //number
        for(int numc=1;numc<=rowno;numc++)
        {
            cout<<numc;
        }
        cout<<endl;
        
    }
    for(rowno=1;rowno<=trows-1;rowno++)
    {
        cout<<" ";
    }
    cout<<"1";
}