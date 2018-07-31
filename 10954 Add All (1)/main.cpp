#include <stdio.h>
#include<queue>
using namespace std;
int main()
{
    int n,m,x,y,sum,c;

    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        sum=0;
        priority_queue <int> a;
      for(int i=0;i<n;i++)
      {
         scanf("%d",&m);
          a.push(-m);
      }
      for(int i=0;i<n-1;i++)
      {
          x=-a.top();
          a.pop();
          y=-a.top();
          a.pop();
          c=x+y;
          sum=sum+(c);
          a.push(-(c));
      }
      printf("%d\n",sum);
    }
}
