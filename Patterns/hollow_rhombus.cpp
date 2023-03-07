/*  5   

*	*   *   *   *		  
*	*	    *   *
* 	            *
* 	*       *   *
* 	*	*   *   *

*/
#include<iostream>
using namespace std;

int main()
{
    int rowno,trows;
    cin>>trows;
    for(int i=1;i<=trows;i++)
      cout<<"*"<<"\t";

    cout<<endl;
    for(rowno=1;rowno<=trows/2;rowno++)
    {
    //star
    for(int starc=1;starc<=(trows/2)-rowno+1;starc++)
    {
        cout<<"*"<<"\t";
    }
    //spaces
    for(int spc=1;spc<=(rowno*2)-1;spc++)
    {
        cout<<" "<<"\t";
    }
    //star
    for(int starc=1;starc<=(trows/2)-rowno+1;starc++)
    { 
        cout<<"*"<<"\t";
    }
    cout<<endl;
    }



    for(rowno=trows/2-1;rowno>=1;rowno--)
    {
    //star
    for(int starc=1;starc<=(trows/2)-rowno+1;starc++)
    {
        cout<<"*"<<"\t";
    }
    //spaces
    for(int spc=1;spc<=(rowno*2)-1;spc++)
    {
        cout<<" "<<"\t";
    }
    //star
    for(int starc=1;starc<=(trows/2)-rowno+1;starc++)
    { 
        cout<<"*"<<"\t";
    }
    cout<<endl;

    }
    
    for(int i=1;i<=trows;i++)
      cout<<"*"<<"\t";
}