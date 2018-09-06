#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    double a,b,c,area,s,r,p;

    while(cin>>a>>b>>c)
    {if(a==0||b==0||c==0)
    {
        p=0;
        printf("The radius of the round table is: %.3lf\n",p);
    }
        else
        {


        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        r=area/s;

        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
}


