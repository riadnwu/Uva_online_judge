#include<iostream>
#include<map>
using namespace std;



int main()
{
    int n;
    while(cin>>n,!cin.eof())
    {
        int m=0;
        int max1;
        int a[n][n];
        map<int,map<int,map<int,int> > > b;

        for(int i=0;i<n;i++)
        {
            m=m+i;
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
         max1=a[0][0];
        for(int i=0;i<n;i++)//row no b[i][][]
        {
            for(int j=0;j<n;j++) // no b[][j][] ... 0,1,2,3,4...
            {

                for(int k=0;k<n-j;k++) // no b[][][k]
                {
                    b[i][j][k]=0;
                    for(int l=k;l<j+k+1;l++)
                    {
                       b[i][j][k]=b[i][j][k]+a[i][l];
                       //cout<<"["<<i<<"]["<<l<<"]"<<a[i][l]<<"  ";
                    }
                   // cout<<b[i][j][k]<<"   ";
                    if(b[i][j][k]>max1)
                    {
                       max1= b[i][j][k];
                    }
                }
                //cout<<endl;


            }
        }
       int sum;
       //int count=1;
       for(int j=0;j<n;j++)//row no b[][i][]
        {
            for(int k=0;k<n-j;k++) // no b[][][j] ... 0,1,2,3,4...
            {
                for(int l=n-3;l>=0;l--) // serial of packeg
                {
                    //cout<<count<<" "
                    for(int o=0;o<=l;o++) // no of packeg
                    {
                       sum=0;
                       for(int i=o;i<o+(n-l);i++)
                        {
                        sum=sum+b[i][j][k];
                         //cout<<"["<<i<<"]["<<j<<"]["<<k<<"]"<<b[i][j][k]<<"  ";
                        }
                       if(sum>max1)
                       {
                         max1=sum;
                       }
                       //cout<<endl;
                    }

                }

            }
        }

        cout<<max1;

    }

}
