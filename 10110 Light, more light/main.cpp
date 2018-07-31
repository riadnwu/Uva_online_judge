#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {

        if(floor(sqrt(n))==ceil(sqrt(n)))
        {
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
        }

    }
}
