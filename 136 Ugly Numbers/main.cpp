#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,n;
    long ugly[1502],x,y,z;
    ugly[1]=a=b=c=n=1;
    while(n!=1500)
    {
        x=2*ugly[a];
        y=3*ugly[b];
        z=5*ugly[c];
        ugly[++n]=min(x,min(y,z));
        if(ugly[n]==x)a++;
        if(ugly[n]==y)b++;
        if(ugly[n]==z) c++;
    }
   cout<<"The 1500'th ugly number is "<<ugly[1500]<<".\n";
    return 0;
}
