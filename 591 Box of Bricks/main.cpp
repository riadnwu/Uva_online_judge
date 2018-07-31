#include <iostream>

using namespace std;

int main()
{
   int n,a[100],sum,num,coun=0,c;
   while(cin>>n,n!=0)
   {
       coun++;
       sum=0;
       num=0;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           sum=sum+a[i];
       }
       sum=sum/n;
       c=0;
        for(int i=0;i<n;i++)
       {
           if(a[i]>sum)
           {
               num=num+(a[i]-sum);
           }

       }
       cout<<"Set #"<<coun<<"\nThe minimum number of moves is "<<num<<"."<<endl<<endl;
   }
}
