#include<iostream>
#include<math.h>
#include<iomanip>
#include<stdio.h>
using namespace std;
int i=1;
void e1(double u,double v,double t)
{
    float s,a;
    a=(v-u)/t;
    s=(u*t)+(.5*a*t*t);
    printf("Case %d: %0.3f %.3f\n",i,s,a);
}
void  e2(double u,double v,double a)
{
    float s,t;
    t=(v-u)/a;
    s=(u*t)+(.5*a*t*t);
    printf("Case %d: %0.3f %.3f\n",i,s,t);
}
void e3(double u,double a,double s)
{
   float t,v;
    v=sqrt((u*u)+(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %0.3f %.3f\n",i,v,t);
}
void e4(double v,double a,double s)
{
    float t,u;
    u=sqrt((v*v)-(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %0.3f %.3f\n",i,u,t);
}
int main()
{
  int n;
  double a,b,c;
  while(cin>>n)
  {

      if(n==0)
      {
          break;
      }
      else
      {
           cin>>a>>b>>c;
          if(n==1)
      {
          e1(a,b,c);
      }
      else if(n==2)
      {
          e2(a,b,c);
      }
      else if(n==3)
      {
          e3(a,b,c);
      }
      else if(n==4)
      {
          e4(a,b,c);
      }
      i++;
      }

  }
}
