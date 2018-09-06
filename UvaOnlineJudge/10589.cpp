#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n,m,i,j;
    double r,a,x,y,Area,A,R,d1,d2,d3,d4;

    while(cin>>n>>r)
    {
        if(n==0)
            break;

        a=r;
        A=r*r;
        for(i=0,m=0;i<n;i++)
       {
           cin>>x>>y;
           d1=sqrt((x-0)*(x-0)+(y-0)*(y-0));
           d2=sqrt((x-a)*(x-a)+(y-0)*(y-0));
           d3=sqrt((x-a)*(x-a)+(y-a)*(y-a));
           d4=sqrt((x-0)*(x-0)+(y-a)*(y-a));

           if(d1<=r&&d2<=r&&d3<=r&&d4<=r)
           {
             m++;
           }

        }

           Area=(m*A)/n;

           printf("%.5lf\n",Area);

    }

}
