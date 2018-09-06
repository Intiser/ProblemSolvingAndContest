#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    double a,b,c,deg,ans,h,m,i,j,k,H,M,t_h,t_m;

    while(scanf("%lf:%lf",&h,&m))
    {
        if(h==0&&m==0)
            break;

        t_h=h*60+m;
        a=(t_h*360)/720;
        b=(m*360)/60;
        if(a>b)
        deg=a-b;
        else
            deg=b-a;

        if(deg>180)
            ans=360-deg;
        else
            ans=deg;

        printf("%.3lf\n",ans);
       // printf("%.3lf %.3lf\n",a,b);
         //cout<<ans<<endl;
        //cout<<a<<" "<<b<<endl;
    }

}
