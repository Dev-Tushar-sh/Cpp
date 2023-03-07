/*8
   *********
  *         *
 *           *
  *         *
   *********
*/

#include<iostream>
using namespace std;

int main()
{
   int trows=8,rowno;
   cout<<"Enter no of rows - ";
   cin>>trows;
   for(rowno=1;rowno<=trows/2-1;rowno++)
   {
   //spaces
   for(int spc=1;spc<=(trows/2-1)-rowno+1;spc++)
      cout<<" ";
      
   cout<<"*";
   if(rowno==1)
   {
      for(int starc=1;starc<=trows;starc++)
      cout<<"*";

      cout<<endl;
   }
   else
   {
      for(int starc=1;starc<=trows;starc++)
         cout<<" ";


      for(int spc=1;spc<=2*rowno-3;spc++)
        cout<<" ";

      cout<<"*";
      cout<<endl;
   }
   }
   for(rowno=trows/2-2;rowno>=1;rowno--)
   {
   //spaces
   for(int spc=1;spc<=(trows/2-1)-rowno+1;spc++)
      cout<<" ";

   cout<<"*";
   if(rowno==1)
   {
      for(int starc=1;starc<=trows;starc++)
      cout<<"*";

      cout<<endl;
   }
   else
   {
      for(int starc=1;starc<=trows;starc++)
         cout<<" ";

      for(int spc=1;spc<=2*rowno-3;spc++)
        cout<<" ";

      cout<<"*";
      cout<<endl;
   }
   }
}