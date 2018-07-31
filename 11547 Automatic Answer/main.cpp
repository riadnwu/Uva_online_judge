#include <iostream>
#include <sstream>
using namespace std;

string int_to_str(int num)
{
    stringstream ss;

    ss << num;

    return ss.str();
}

int main()
{
 int t;
  while(cin>>t,!cin.eof())
  {
      long int n;
      int l;
      string s;
      for(int i=0;i<t;i++)
      {
          cin>>n;
          s=int_to_str(((((((n*567)/9)+7492)*235)/47)-498));
          l=s.size();
          cout<<s[l-2]<<endl;

      }
  }
}
