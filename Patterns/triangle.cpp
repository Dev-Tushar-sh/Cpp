/*
            1
		2	3   2
	3	4	5	4	3
4	5	6	7	6	5	4

*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows=1,spc,numc,l=8;
    cout<<"#Enter no. of Rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        for(spc=1;spc<=trows-rowno;spc++)
        {
            cout<<"     ";
        }
        l=rowno;
        for(numc=1;numc<=2*rowno-1;numc++)
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