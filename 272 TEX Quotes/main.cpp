#include<iostream>
#include<string>
using namespace std;
int main()
{
   char s;
    bool chack=false;
    while(cin.get(s))
    {
             if(s=='"' )
             {
                 if(chack==false)
                 {
                   s='`';
                   chack=true;
                 }
                 else
                 {
                   s='\'';
                   chack=false;
                 }
                 cout<<s<<s;
             }
    else
    {
        cout<<s;
    }

    }

}
