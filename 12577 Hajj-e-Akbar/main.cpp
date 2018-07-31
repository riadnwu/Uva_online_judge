#include<iostream>
using namespace std;
int main()
{
   string c;
    int i=0;
    while(getline(cin,c))
    {

        if(c.compare("*")==0)
        {
            break;
        }
        else
        {
           if(c.compare("Hajj")==0)
           {i++;
               cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;
           }
           else if(c.compare("Umrah")==0)
           {i++;
               cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
           }
        }
    }
}
