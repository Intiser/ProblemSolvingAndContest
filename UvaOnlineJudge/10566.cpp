#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

double funct(double x, double y,double d)
{

    double p,q,c1;
    p=sqrt(x*x-d*d);
    q=sqrt(y*y-d*d);

    c1=(p*q)/(p+q);

    return c1;


}


double binsrch(double x,double y,double c)
{
    double high,low,mid,key;
    int i,j;

    if(x>y)
    high=x;
    else
    high=y;

    low=0;

    for(i=0;i<100;i++)
    {
        mid=(high+low)/2;

        key=funct(x,y,mid);
        if(key>c)
        {
            low=mid;
        }
        else
        {
          high=mid;
        }

    }

   return mid;
}

int main()
{
int cs,i;
double x,y,c,ans;

//cin>>cs;

while(cin>>x>>y>>c){


//scanf("%lf %lf %lf",&x,&y,&c);

  ans=binsrch(x,y,c);

printf("%.3lf\n",ans);


}



}
