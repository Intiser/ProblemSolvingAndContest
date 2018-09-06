#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
     double s,h,a,v,l,x,sin=0.15643446504023,cos=0.98768834059513,tan=0.3249196962329063;

    while(cin>>s)
    {
        v=s*cos;
        l=s*sin;
        x=l*tan;

        a=v+x;

        printf("%.10lf\n",a);



    }



}
