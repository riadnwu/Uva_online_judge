//riadnwu@gmail.com
#include <iostream>

using namespace std;

int main()
{
 int n;

 while (cin>>n)
 {
   int n1=(n*(n+1))/2;
   int a[n1][n1];
   int  maxValue,count1=n;
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
       {
           cin>>a[i][j];
           if(i==0 && j==0)
           {
               maxValue=a[i][j];
           }
           else{
            maxValue=max(a[i][j],maxValue);
           }

       }
   }

    for (int j=0;j<n;j++)
    {
        count1=n;
        for (int k=n-1;k>0;k--)
        {
            for (int l=0;l<k;l++)
            {
                int temp = 0;
                for (int m=l;m< l+((n+1)-k);m++)
                {
                    temp = temp + a[m][j];
                }
                a[count1][j]=(temp);
                maxValue=max(a[count1][j],maxValue);
                count1++;
            }

        }

    }
    for (int i=0;i<n1;i++)
    {
        int t=n;
         for (int j=n-1;j>0;j--)
         {
            for (int k=0;k<j;k++)
            {
                int sum=0;
                for(int l=k;l<k+(n-j);l++)
                {
                    sum+= a[i][l];
                }
                a[i][t]=sum;
                maxValue=max(a[i][t],maxValue);
                t++;
            }

         }
    }



    cout<<maxValue<<endl;

 }
}
