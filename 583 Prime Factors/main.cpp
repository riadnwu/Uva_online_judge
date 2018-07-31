#include<iostream>
#include<stdio.h>
 #include <sstream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
      ostringstream s;
      if(n<0)
      {
        s<<n<<" = -1 ";
        n=n*(-1);
        int i=2;
        long int temp;
        long int m=n;
        while(i<=m)
        {
            if(m%i==0)
            {
                s<<" x "<<i;
                m=m/i;
                temp=temp*i;
                if(temp==n)
                {
                    break;
                }
            }
            else
            {
                i++;
            }
        }
      }
      else if(n>0)
      {
         s<<n<<" = ";
        int i=2;
        long int temp;
        long int m=n,x=0;
        while(i<=m)
        {
            if(m%i==0)
            {
                if(x==0)
                {
                    s<<i;
                    x=1;
                }
                else{
                   s<<" x "<<i;
                }

                m=m/i;
                temp=temp*i;
                if(temp==n)
                {
                    break;
                }
            }
            else
            {
                i++;
            }
        }
      }
      cout<<s.str()<<endl;
    }
}
