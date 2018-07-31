#include<iostream>
using namespace std;
int main()
{
    int s,n,m;
    for(int i=0;i<10;i++)
    {
        s=0;
        cin>>n;
        if(n<1 || n>100)
        {
            if(n==0)
                break;
            else
                goto down;

        }
        else
        {
         while(n>1)
         {
             if(n==2)
             {
                 s=s+1;
                 n=0;
             }
             else
             {
                  m=n;
                  n=n/3;
                  s=s+n;
                  n=n+(m-(3*n));

             }
         }
           cout<<s<<"\n";
        }

        down:;
    }

}
