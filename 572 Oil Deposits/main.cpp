#include<bits/stdc++.h>
using namespace std;

int main()
{

 int n,m;

 while( cin>>n>>m && !cin.eof())
 {
      map<int,int>loc[n];
     char data[n][m];
     int count=0;
     for(int i=0;i<n;i++)
     {
         int temp=0;
         for(int j=0;j<m;j++)
         {
           cin>>data[i][j];
           if(data[i][j]=='@')
           {
               loc[i][temp]=j;
               temp++;
           }
         }
     }

     for(int i=0;i<n;i++)
     {
         for(int j=0;j<loc[i].size();j++)
         {
             if(count==0)
             {
                 count++;
             }
         }
     }

 }
}
