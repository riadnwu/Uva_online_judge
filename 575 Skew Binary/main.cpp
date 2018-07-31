#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
     int sum;
     string s;
     while(cin>>s)
     {
         sum=0;
         int j=s.length();
         if(s=="0")
         {
             break;
         }
         else
         {
            for(int i=0;i<s.length();i++)
            {
                sum=sum+((pow(2,j)-1)*((int)s[i]-48));
                j--;
            }

             cout<<sum<<endl;
         }
     }
}
