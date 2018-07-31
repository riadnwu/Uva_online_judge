#include<iostream>
#include<string>
using namespace std;
int main()
{
     string s1 = " `1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:\"ZXCVBNM<>?";
  string s2 = " `123qjlmfp/[]456.orsuyb;=\\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG\"";
    string s;
    int x;
    while(getline(cin,s))
    {
        for(int i=0;i<s.length();i++)
        {
            x=s1.find(s[i]);
            cout<<s2[x];
        }
        cout<<endl;
    }
}
