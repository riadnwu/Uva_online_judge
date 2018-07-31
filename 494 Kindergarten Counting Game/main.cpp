#include<iostream>
#include<string>
using namespace std;
int main()
{

    string s;

    while(getline(cin,s))
    {
          int n=0;
    bool chack=false;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]>='a'&&s[i]<='z'|| s[i]>='A'&&s[i]<='Z')
        {
         if(chack==false)
         {
              n++;
              chack=true;
         }
        }
        else
        {
           chack=false;
        }
    }
    cout<<n<<endl;
    }

}
