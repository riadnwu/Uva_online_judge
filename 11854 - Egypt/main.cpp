#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    while(cin>>x>>y>>z)
    {
        if(x==0&&y==0&&z==0)
        {
            break;
        }
        else
        {
            if(x>y)
            swap(x,y);
            if(y>z)
            swap(y,z);
            if(z*z==(x*x)+(y*y))
            {
                cout<<"right"<<endl;
            }
            else
            {
               cout<<"wrong"<<endl;
            }
        }
    }
}
