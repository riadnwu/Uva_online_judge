#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int w,h,n;

    while(cin>> w>>h>>n)
    {
        if(w==0&&h==0&&n==0)
        {
            break;
        }
    vector<vector<int> > space(w,vector<int>(h,0));
      int empt=w*h;
      int x1,x2,y1,y2;
      while(n>0)
      {
         cin>>x1>>y1>>x2>>y2;
      for(int i=min(x1,x2)-1;i<max(x1,x2);i++)
      {
          for(int j=min(y1,y2)-1;j<max(y1,y2);j++)
          {
            if(space[i][j]==0)
            {
                empt--;
                space[i][j]=1;
            }
          }
      }
      n--;
      }
      if(empt==0)
      cout<<"There is no empty spots."<<endl;
       else if(empt==1)
        cout<<"There is one empty spot."<<endl;
        else
         cout<<"There are "<<empt<<" empty spots."<<endl;
    }
}
