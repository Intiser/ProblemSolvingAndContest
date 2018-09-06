#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double v,u,t,s,a;
    int i=0,n;

    while(cin>>n)
    {
       if(n==0)
        break;

        i++;

       if(n==1)
       {
           cin>>u>>v>>t;

           a=(v-u)/t;
           s=u*t+(a*t*t)/2;
           printf("Case %d: %.3lf %.3lf\n",i,s,a);

       }
       else if(n==2)
       {
           cin>>u>>v>>a;

           t=(v-u)/a;
           s=u*t+(a*t*t)/2;
            printf("Case %d: %.3lf %.3lf\n",i,s,t);

       }
       else if(n==3)
       {
           cin>>u>>a>>s;

           v=sqrt(u*u+2*a*s);
           t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",i,v,t);
       }
       else if(n==4)
       {
           cin>>v>>a>>s;

           u=sqrt(v*v-2*a*s);
           t=(v-u)/a;

            printf("Case %d: %.3lf %.3lf\n",i,u,t);
       }


    }

}
