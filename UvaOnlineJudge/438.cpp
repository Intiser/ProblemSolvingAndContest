#include<iostream>
#include<cmath>
#include<stdio.h>

using namespace std;

int main()
{
    double x1,y1,x2,y2,x3,y3,a,b,c,s,area,A,t,R,C;

    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {

        a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        b=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        c=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));

        s=(a+b+c)/2;

        t=sqrt(s*(s-a)*(s-b)*(s-c));

        A=acos((b*b+c*c-a*a)/(2*b*c));

        R=a/(2*sin(A));

          C=2*R*M_PI;
       // area=M_PI*R*R;

       // printf("%.3lf\n",a);

        printf("%.2lf\n",C);


    }


}
