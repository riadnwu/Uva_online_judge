#include<iostream>
using namespace std;
int main()
{
    int a,b,c,n,f,ans;
    while(cin>>n||!cin.eof())
    {
        for(int i=0;i<n;i++)
        {
            cin>>f;
            ans=0;
            for(int j=0;j<f;j++)
            {
                cin>>a>>b>>c;
                ans=ans+(a*c);
            }
            cout<<ans<<endl;
        }
    }
}
