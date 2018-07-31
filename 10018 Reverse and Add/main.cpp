#include <iostream>
#include<string.h>
#include<algorithm>
#include<sstream>
#include <sstream>
using namespace std;
bool pal(string x)
{
 long int beg,end1;
  beg=0;
  end1=x.length()-1;
  while(beg<=end1)
  {
      if(x[beg]==x[end1])
      {
          beg++;
          end1--;
      }
      else
      {
          return false;
      }
  }
  return true;

}
int main()
{
    string x;
    long int n,x1,sum,y1,count1;
    while(cin>>n||!cin.eof())
    {
        for(int i=0;i<n;i++)
        {
            cin>>x;
            count1=0;
            while(pal(x)==false)
            {
               stringstream ss(x);
               ss>>x1;
               reverse(x.begin(),x.end());
               stringstream ss1(x);
               ss1>>y1;
               sum=x1+y1;
                ostringstream oss;
               oss<< sum;
               x=oss.str();
               count1++;
            }
            cout<<count1<<" "<<x<<endl;
        }
    }
    return 0;
}
