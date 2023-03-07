/*

Enter Height of Pyramid: 5
Enter Number of Pyramid: 6  
                                                                                
    *        *        *        *        *        * 
   * *      * *      * *      * *      * *      * * 
  *   *    *   *    *   *    *   *    *   *    *   *
 *     *  *     *  *     *  *     *  *     *  *     *
******************************************************

*/
#include<iostream>
using namespace std;
int main()
{
    int trows=5,rowno,no=6;
    cout<<"Enter height of a Pyramid - ";
    cin>>trows;
    cout<<"Enter Number of Pyramid - ";
    cin>>no;
    
    for(rowno=1;rowno<=trows;rowno++)
    {
        //stair space
        for(int spc=1;spc<=trows-rowno;spc++)
        {
           cout<<" ";
        }
        //star
        for(int starc=1;starc<=2*rowno-1;starc++)
        {
            if(rowno==trows)
            cout<<"*";
            else if(starc==1 or starc==2*rowno-1)
            cout<<"*";
            else
            cout<<" ";
        }
        for(int j=1;j<=no-1;j++)
        {
            //pyramid space
            for(int spc=1;spc<=2*(trows-rowno);spc++)
            {
                cout<<" ";
            }
           //star
            for(int starc=1;starc<=2*rowno-1;starc++)
            {
                if(rowno==trows)
                    cout<<"*";
                else if(starc==1 or starc==2*rowno-1)
                    cout<<"*";
                else
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    
}