#include<iostream>
using namespace std;
int main()
{
    int n,a,b,sum[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
      sum[i]=0;
      cin>>a>>b;
      for(int j=a;j<=b;j++)
      {
          if(j%2==1)
          {
              sum[i]=sum[i]+j;
          }
      }
    }
     for(int i=0;i<n;i++)
    {
      cout<<"Case "<<i+1<<": "<<sum[i]<<endl;
    }

}
