#include<iostream>
using namespace std;
int main()
{
    unsigned int a,a1,b,b1,cl,mcl;
    while(cin>>a1>>b1)
    {
        mcl=0;
        a=a1<=b1?a1:b1;
        b=b1>=a1?b1:a1;
        for(int i=a;i<=b;i++)
        {
            int temp=i;
            cl=1;
            while(temp!=1)
            {
                if(temp%2==1)
                {
                    temp=(3*temp)+1;
                }
                else
                {
                    temp=temp/2;
                }
                cl++;
            }
            if(mcl<cl)
            {
              mcl=cl;
            }
        }
          cout<<a1<<" "<<b1<<" "<<mcl<<endl;
    }

}
