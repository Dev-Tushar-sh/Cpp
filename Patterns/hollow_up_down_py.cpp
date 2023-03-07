/*5
    *  
   * *  
  *   * 
 *     * 
*       * 
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;
int main()
{
    int trows=5,rowno,m=1;
    cout<<"enter no of rows - ";
    cin>>trows;
    for(rowno=1;rowno<=trows;rowno++)
    {
        for(int spc=1;spc<=trows-rowno;spc++)
        {
            cout<<" ";
        }
        for(int starc=1;starc<=rowno*2-1;starc++)
        {
            if(starc==1 or starc==rowno*2-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
    for(rowno=trows-1;rowno>=1;rowno--)
    {
        for(int spc=1;spc<=trows-rowno;spc++)
        {
            cout<<" ";
        }
        for(int starc=1;starc<=rowno*2-1;starc++)
        {
            if(starc==1 or starc==rowno*2-1)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}