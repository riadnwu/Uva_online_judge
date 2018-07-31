#include<iostream>
using namespace std;
int main()
{
    int n,p[12],r[12],coun=0,ext;
    while(cin>>n,n>=0)
    {
        coun++;
           for(int i=0;i<12;i++)
          {
            cin>>p[i];

          }
          for(int i=0;i<12;i++)
          {
            cin>>r[i];

          }
            cout<<"Case "<<coun<<":\n";
            for(int i=0;i<12;i++)
          {
              if(n<r[i])
              {
                 cout<<"No problem. :(\n";
                 n=(n+p[i]);
              }
              else
              {
                 cout<<"No problem! :D\n";
                 n=(n+p[i])-r[i];
              }


          }
   }
}
