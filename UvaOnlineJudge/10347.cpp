#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double a,b,c,area,s;

    while(cin>>a>>b>>c)
    {
        area=-1;
       if((a+b>c)&&(b+c>a)&&(c+a>b))
        {s=(a+b+c)/2;

        area=sqrt(s*(s-a)*(s-b)*(s-c))*(4.0/3.0);
        }

        printf("%.3lf\n",area);

    }



}

