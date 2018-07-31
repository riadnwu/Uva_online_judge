#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    long int n,a[5000],sum;
    while(cin>>n,2 <=n&& n <= 5000)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        while(n!=1)
        {
           sort(a,a+n);
           a[1]=a[0]+a[1];
           sum=sum+a[1];
           n=n-1;
           for(int i=0;i<n;i++)
           {
               a[i]=a[i+1];
           }

        }
        cout<<sum<<endl;


    }
}
