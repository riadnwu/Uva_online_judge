#include<iostream>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s))
    {
       for(int i=0;i<s.length();i++)
       {
           if(s[i]!=' ')
           {
               s[i]=s[i]-7;
           }
       }
       cout<<s<<endl;
    }
}
