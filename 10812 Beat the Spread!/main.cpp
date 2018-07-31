#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n,!cin.eof())
    {
        for(int i=0;i<n;i++)
        {
            long int s,d;
            long int x1,x2;
            cin>>s;
            cin>>d;
            if(d>s || (s-d)%2==1)
            {
                cout<<"impossible"<<endl;
            }
            else
            {
                x1=(s+d)/2;
                x2=(s-d)/2;
                cout<<x1<<" "<<x2<<endl;
            }

        }
    }
}
