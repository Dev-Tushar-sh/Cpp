#include<iostream>
using namespace std;

int main()
{
    int rowno,trows,spc;
    cout<<"enter odd rows - ";
    cin>>trows;
    //1st row
        cout<<"*";

        for(int spc1=1;spc1<=trows/2 -1 ;spc1++)
            cout<<" ";
        for(int starc1=1;starc1<=trows/2+1;starc1++)
            cout<<"*";
        
        cout<<endl;
       
    //2nd row
    for(rowno=1;rowno<=trows/2 - 1;rowno++)
    {
        //star
        cout<<"*";
        //space
        for(int spc2=1;spc2<=trows/2-1;spc2++)
            cout<<" ";
        //star
        cout<<"*";
        cout<<endl;
    }
    
    //middle row
    for(rowno=1;rowno<=trows;rowno++)
        cout<<"*";
    cout<<endl;
    //5th row
    for(rowno=1;rowno<=trows/2 -1;rowno++)
    {
        //spaces
        for(int spc3=1;spc3<=trows/2;spc3++)
            cout<<" ";
        //star
        cout<<"*";
        //spaces
        for(int spc4=1;spc4<=trows/2-1;spc4++)
            cout<<" ";
        //star
        cout<<"*";

        cout<<endl;
    }
    //last row

        //stars
        for(int starc2=1;starc2<=trows/2+1;starc2++)
             cout<<"*";
        //spaces
        for(int spc5=1;spc5<=trows/2-1;spc5++)
            cout<<" ";
        //star
        cout<<"*";
    

}