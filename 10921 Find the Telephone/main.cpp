#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c;
    while(cin.get(c)||!cin.eof())
    {
        if(c>='A'&&c<='C')
        {
            c='2';
        }
         else if(c>='D'&&c<='F')
        {
            c='3';
        }
         else if(c>='G'&&c<='I')
        {
            c='4';
        }
          else if(c>='J'&&c<='L')
        {
            c='5';
        }
         else if(c>='M'&&c<='O')
        {
            c='6';
        }
         else if(c>='P'&&c<='S')
        {
            c='7';
        }
         else if(c>='T'&&c<='V')
        {
            c='8';
        }
        else if(c>='W'&&c<='Z')
        {
            c='9';
        }
        cout<<c;
    }
}
