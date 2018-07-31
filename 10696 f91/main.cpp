#include <iostream>

using namespace std;

unsigned long int f91(unsigned long int n)
{
    if(n<=100)
    {
      return f91(f91( n + 11));
    }
    else if(n>= 101)
    {
       return n-10;
    }
}

int main()
{
    unsigned long int n,x;
    while(cin>>n && n!=0)
    {
       x=f91(n);
       cout<<"f91("<<n<<") = "<<x<<endl;
    }

}
