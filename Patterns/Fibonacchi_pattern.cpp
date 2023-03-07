/*4

0 
1    1 
2    3     5 
8   13    21    34

*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows,term1=0,term2=1,nxterm;
    cout<<"Enter row no. - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        for(int i=1;i<=rowno;i++)
        {  
            if(rowno==1)
                {cout<<term1<<"\t";continue;}
            if(rowno==2 and i==1)
                {cout<<term2<<"\t";continue;}

            nxterm = term1 + term2;
            term1 = term2;
            term2 = nxterm;
            cout<<nxterm<<"\t";
        }
            cout<<endl;
    }
        return 0;
}
