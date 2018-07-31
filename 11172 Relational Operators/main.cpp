#include<iostream>
using namespace std;
int main()
{
    int t,a,b;
    char c[15];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            c[i]='<';
        }
        else if(a>b)
        {
            c[i]='>';
        }
        else{
            c[i]='=';
        }

    }
    for(int i=0;i<t;i++)
    {
      cout<<c[i]<<endl;
    }
}
