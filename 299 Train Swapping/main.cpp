#include <iostream>

using namespace std;

int main()
{
    int n,l,a[1000],cari,temp;
    while(cin>>n||!cin.eof())
    {
        for(int i=0;i<n;i++)
        {
            cin>>l;
            for(int j=0;j<l;j++)
            {
                cin>>a[j];
            }
            cari=0;
            for(int j=0;j<l;j++)
            {
                for(int k=j;k<l;k++)
                {
                    if(a[j]>a[k])
                    {
                        temp=a[j];
                       a[j]=a[k];
                       a[k]=temp;
                       cari++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<cari<<" swaps."<<endl;
        }
    }

    return 0;
}
