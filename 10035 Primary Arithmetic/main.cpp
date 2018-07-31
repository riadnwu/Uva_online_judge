#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
   unsigned int a,b,a1,b1;
    int carry,te,x,y;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        carry=0;
        te=0;
        x=min(a,b);
        y=max(a,b);
        a=x;
        b=y;
         while(b>0)
         {
           a1=a%10;
           b1=b%10;
          if(a1+b1+te>9)
          {
              carry++;
              te=1;
          }
          else{te=0;}
           a=a/10;
           b=b/10;

         }
      if(carry==0)
      {
          cout<<"No carry operation."<<endl;
      }
      else if(carry==1)
      {
          cout<<"1 carry operation."<<endl;
      }
      else
      {
          cout<<carry<<" carry operations."<<endl;
      }

    }
}
