#include<iostream>
using namespace std;

int main()
{
    unsigned int a,b;

    while(cin>>a>>b || !cin.eof())
    {
      cout<<(a^b)<<endl;
    }
}
