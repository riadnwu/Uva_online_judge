#include<iostream>
using namespace std;
int main()
{
    long long x;
    while(cin>>x)
    {
     if(x<0)
        break;
     cout<<(x*(x+1))/2+1<<endl;
    }
}
