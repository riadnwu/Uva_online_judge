#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int k=1,n;
    unsigned long int a[100],b[100],c[100],mn,md,mx;
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>a[i]>>b[i]>>c[i];
        }
        for(int i=0;i<n;i++)
        {
            mx=max(a[i],max(b[i],c[i]));
            mn=min(a[i],min(b[i],c[i]));
            if(a[i]!=mx && a[i] !=mn)
            {
                md=a[i];
            }
            else if(c[i]!=mx && c[i] !=mn)
            {
                md=c[i];
            }
            else if(b[i]!=mx && b[i] !=mn)
            {
                md=b[i];
            }
            cout<<"Case "<<k<<": "<<md<<endl;
            k++;
        }
    }
}
