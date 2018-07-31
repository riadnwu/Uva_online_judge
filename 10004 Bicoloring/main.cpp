#include <iostream>
#include<map>
using namespace std;

int main()
{
  int n,m;
  while(cin>>n>>m && n!=0 )
  {
    map<int,int> d;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        d[x]=y;

    }

    for (map<int,int>::iterator temp,it=d.begin(); it!=d.end(); ++it)
    {
        int beg=it->first,end1=it->second;
        temp=it;

        while (temp!=d.end())
        {

           if (temp->first == end1 || temp->second == end1)
            {
                if(temp->first == end1 )
                {
                    end1=temp->second;
                }
                else if(temp->second == end1 )
                {
                    end1=temp->first;
                }
                if(beg==end1)
               {
                   cout<<"NOT BICOLORABLE."<<endl;
                   goto down;
               }

            }
            ++temp;
        }
    }
   cout<<"BICOLORABLE."<<endl;
  down:;
  }
}
