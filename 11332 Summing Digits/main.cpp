#include <iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include <sstream>
using namespace std;

string int_to_str(int num)
{
    stringstream ss;

    ss << num;

    return ss.str();
}

int str_to_int(string str)
{
    stringstream ss(str);

    int num;
    ss >> num;

    return num;
}


void f(string s)
{
    int sum=0;
    string temp;
       for(int i=0;i<s.length();i++)
       {
          int x;
          char c[] = {" "};
          c[0]=s[i];
          x=atoi(c);
          sum=sum+x;

       }
       temp.assign(int_to_str(sum));



       if(temp.length()==1)
       {
           cout<<temp<<endl;
       }
       else
       {
           f(temp);
       }
}

int main()
{
    string s;
    //istringstream ( s ) >> numb;
    while(getline(cin,s) && s.compare("0") != 0)
    {
       f(s);
    }

}
