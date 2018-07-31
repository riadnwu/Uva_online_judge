#include <iostream>
#include <math.h>
#include<stdio.h>
using namespace std;
int main()
{
double  n,m,k;
 while(cin>>n>>m )
 {
    k=pow(m,(1/n));
    printf("%.0lf\n",k);
 }
}
