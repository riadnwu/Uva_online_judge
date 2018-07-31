#include<iostream>
#include<string>
using namespace std;
bool prime(int n)
{
    for(int i = 2; i <= n / 2; ++i)
    {
       if(n % i == 0)
      {
          return false;
      }
    }
      return true;
}
int main()
{
    string s[205],s1[201];
    char c;
    int n,coun[205],inc,chack;
    while(cin>>n)
    {
        if(n<0&&n>201)
        {
            break;
        }
       for(int j=0;j<n;j++)
        {
          cin>>s[j];
        }

        for(int j=0;j<n;j++)
        {

            cout<<"Case "<<j+1<<": ";

            c=s[j][0];
            chack=0;
            inc=0;
            coun[0]=1;
            for(int i=1;i<=s[j].length();i++)
            {

             if(c==s[j][i] )
             {
                coun[inc]++;

             }
             else
             {
                 if(coun[inc]==1)
                 {

                 }
                 else if(prime(coun[inc])==true)
                 {
                     cout<<c;
                     chack=1;
                 }
                 c=s[j][i];
                 inc++;
                 coun[inc]=1;

             }
            }
            if(chack==0)
              {
                  cout<<"empty";
              }
            cout<<endl;
        }
    }
}
