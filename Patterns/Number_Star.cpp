/*7
*
* 1 *
* 1 2 1 *
* 1 2 3 2 1 *
* 1 2 1 *
* 1 *
*

*/
#include<iostream>
using namespace std;
int main()
{
    int rowno,trows=7,i;
    for(rowno=1;rowno<=trows/2+1;rowno++)
    {
        i=0;
        for(int starc=1;starc<=rowno*2-1;starc++)
        {
            if(starc==1 or starc==rowno*2-1)
            {cout<<"* ";continue;}
            else
            if(starc<=rowno)
            {i++;cout<<i<<" ";}
            else
            {i--;cout<<i<<" ";}
        }
        cout<<endl;
    }
    for(rowno=trows/2;rowno>=1;rowno--)
    {
        i=0;
        for(int starc=1;starc<=rowno*2-1;starc++)
        {
            if(starc==1 or starc==rowno*2-1)
            {cout<<"* ";continue;}
            else
            if(starc<=rowno)
            {i++;cout<<i<<" ";}
            else
            {i--;cout<<i<<" ";}
        }
        cout<<endl;

    }


}