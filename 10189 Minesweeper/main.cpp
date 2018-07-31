#include <iostream>

using namespace std;

int main()
{
    int n,m,l=0;
    while(cin>>n>>m)
    {

      if(n==0&&m==0)
      {
          break;
      }
      char a[n][m];
      int loc1[n*m],loc2[n*m],coun=0;

       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               cin>>a[i][j];
               if(a[i][j]=='*')
               {
                  loc1[coun]=i;
                  loc2[coun]=j;
                  coun++;
               }
               else
               {
                 a[i][j]='0' ;
               }
           }
       }
       for(int i=0;i<coun;i++)
       {
          for(int j=loc1[i]-1;j<=loc1[i]+1;j++)
          {
              for(int k=loc2[i]-1;k<=loc2[i]+1;k++)
              {
                  if(j>-1&&j<n&&k>-1&&k<m)
                  {
                      if(j==loc1[i]&& k==loc2[i])
                       {

                       }
                    else
                      {
                       if(a[j][k]!='*')
                       {
                         a[j][k]=a[j][k]+1;
                       }
                     }
                  }
             }

          }
       }
       if(l!=0)
       cout<<endl;
        l++;
       cout<<"Field #"<<l<<":\n";
        for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
             cout<<a[i][j];
           }
           cout<<endl;
       }

    }
}
