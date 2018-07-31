#include <iostream>
#include<map>
#include<stdio.h>
#include<iomanip>
using namespace std;

int main()
{

    int n;
    while(cin>>n)
    {
        map <int ,map<int,int> > a;
        map <int,float> sum;
        float m[n];
        float count1;
        for(int i=0;i<n;i++)
        {
            cin>>m[i];
            sum[i]=0;
            for(int j=0;j<m[i];j++)
            {
              cin>>a[i][j];
              sum[i]=sum[i]+a[i][j];
            }
            sum[i]=sum[i]/m[i];
        }
        for(int i=0;i<n;i++)
        {
            count1=0;
           for(int j=0;j<m[i];j++)
           {

             if(a[i][j]>sum[i])
             {
                count1++;
             }

           }
           float ans;
           ans=(count1/m[i])*100;
          // cout<<ans<<endl;
           printf("%.3f",ans);
           cout<<"%"<<endl;
        }


    }
}
