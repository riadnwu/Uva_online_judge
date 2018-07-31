#include <iostream>

using namespace std;

int main()
{
   int x;

   while(cin>>x , !cin.eof())
   {
       for(int i=0;i<x;i++)
       {

           int n,m;

           cin>>n;
           cin>>m;
           for(int j=0;j<m;j++)
           {
               for(int k=0;k<(n*2)-1;k++)
               {
                   if(k>n-1)
                   {
                      for(int l=0;l<(n*2)-k-1;l++)
                         {
                              cout<<(n*2)-k-1;
                         }
                   }
                   else
                   {
                       for(int l=0;l<=k;l++)
                         {
                              cout<<k+1;
                         }
                   }

                   cout<<endl;
               }
               if(j<m-1)
               {
                 cout<<endl;
               }

           }
           if(i<x-1)
           cout<<endl;
       }

   }
}
