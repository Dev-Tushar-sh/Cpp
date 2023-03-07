/*
        1
	2	3	2
3	4	5	4	3
	2	3	2
		1
(2*((trows-1)-rowno)+1)
*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows,l;
    cout<<"enter row no. -";
    cin>>trows;
    //1st part
    for(rowno=1;rowno<=trows;rowno++)
    {
        //spaces
        for(int spc=1;spc<=trows-rowno;spc++)
        {
            cout<<"     ";
        }
        //numbers
        l=rowno;
        for(int numc=1;numc<=2*rowno-1;numc++)
        {
            if(numc<rowno)
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
        cout<<endl;
    }
    //2nd part
    for(rowno=trows-1;rowno>=1;rowno--)
    {
       //spaces
        for(int spc2=1;spc2<=(trows-1)-(rowno-1);spc2++)
        {
            cout<<"     ";
        }
       //numbers
       l=rowno;
       for(int numc=1;numc<=2*(rowno)-1;numc++)
       {
           if(numc<rowno)
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
       cout<<endl;
    }

}