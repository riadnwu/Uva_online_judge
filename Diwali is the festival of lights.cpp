#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int main()
{
    int q;
    while(cin>>q,!cin.eof())
  {
      for(int i=0;i<q;i++)
      {
        long int n,m,l,num,left,right,count1,sum,temp;
        double x,y;
        string s;

      cin>>s;
      cin>>n>>m;
       l=s.length();
       count1=0;
       sum=0;
       for(int j=0;j<l;j++)
       {
           if(s[j]=='B')
           {
               count1++;
           }
       }


          x=n/l;
          left=(ceil(x)*l)+1;
          temp=left-l;

          y=m/l;
          right=(floor(y)*l);

          if(left-n !=0)
          {
           for(int j=n;j<left;j++)
           {
             if(s[(j-temp)]=='B')
             {
               sum++;
             }
           }

          }
          else
          {
             left=n;
          }



          if(m-right!=0)
          {

            for(int j=right+1;j<=m;j++)
           {
             if(s[(j-right)]=='B')
             {
               sum++;
             }
           }
          }
          else
          {
             right=m;
          }


          if((right+1)-left==l)
          {
          sum=sum+count1;
          }
          else if(left<right)
          {
            x=left/l;
            num=((right/l))-ceil(x);
            sum=sum+num*count1;
          }
          else
          {
             sum=sum;
          }

          cout<<"Case #"<<i+1<<": "<<sum<<endl;
      }

    }
}
