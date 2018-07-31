#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int b[3][3],min1[6],coun,temp;
    while(cin>>b[0][0]>>b[0][1]>>b[0][2]>>b[1][0]>>b[1][1]>>b[1][2]>>b[2][0]>>b[2][1]>>b[2][2])
    {

       min1[0]=b[0][1]+b[0][2]+b[1][0]+b[2][0]+b[1][1]+b[2][2];
       min1[1]=b[0][1]+b[0][2]+b[1][0]+b[2][0]+b[2][1]+b[1][2];
       min1[2]=b[0][0]+b[0][1]+b[1][2]+b[2][2]+b[1][1]+b[2][0];
       min1[3]=b[0][0]+b[0][1]+b[1][2]+b[2][2]+b[1][0]+b[2][1];
       min1[4]=b[0][0]+b[0][2]+b[1][1]+b[2][1]+b[1][2]+b[2][0];
       min1[5]=b[0][0]+b[0][2]+b[1][1]+b[2][1]+b[1][0]+b[2][2];

       temp=min1[0];
       coun=0;
       for(int i=1;i<6;i++)
       {
           if(temp>min1[i])
           {
               temp=min1[i];
               coun=i;
           }
       }
       if(coun==0)
       {
          cout<<"BCG "<<temp<<endl;
       }
       else if(coun==1)
       {
          cout<<"BGC "<<temp<<endl;
       }

       else if(coun==2)
       {
          cout<<"CBG "<<temp<<endl;
       }
       else if(coun==3)
       {
          cout<<"CGB "<<temp<<endl;
       }
         else if(coun==4)
       {
          cout<<"GBC "<<temp<<endl;
       }
       else if(coun==5)
       {
          cout<<"GCB "<<temp<<endl;
       }


    }
}
