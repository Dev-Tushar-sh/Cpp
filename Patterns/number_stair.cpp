#include<iostream>
using namespace std;
int main()
{
    int rowno,trows,i=1,spc,numc;
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        for(numc=1;numc<=rowno;numc++)
        {
            cout<<i<<"    ";
            i++;
        }
        cout<<endl;
    }

}