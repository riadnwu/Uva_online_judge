#include <iostream>

using namespace std;

int main()
{
    string s1=" `1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    string s2=" ``1234567890-QQWERTYUIOP[]AASDFGHJKL;ZZXCVBNM,.";
    string s;
    int x;
   while(getline(cin,s)||!cin.eof())
   {
      for(int i=0;i<s.length();i++)
      {
          x=s1.find(s[i]);
          cout<<s2[x];
      }
      cout<<endl;
   }
    return 0;
}
