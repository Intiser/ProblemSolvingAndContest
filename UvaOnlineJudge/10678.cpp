#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int t,i;
    double d,l,r,a,b,area,pi=2*acos(0);

    cin>>t;

    for(i=0;i<t;i++)
    {
       cin>>d>>l;
       a=l/2; r=d/2;
       b=sqrt(a*a-r*r);
       area=a*b*pi;

       printf("%.3lf\n",area);

    }

}
