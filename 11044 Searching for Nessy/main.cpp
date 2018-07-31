#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int n,x,y,m;
    while(cin>>n||!cin.eof())
    {
        for(int i=0;i<n;i++)
        {
             cin>>x>>y;
            x=x-2;
            y=y-2;
            if(x%3==0)
            {
               x=x/3;
            }
            else
            {
                x=x/3+1;
            }
             if(y%3==0)
            {
                y=y/3;
            }
            else
            {
                y=y/3+1;
            }
            cout<<x*y<<endl;
        }

    }
}
