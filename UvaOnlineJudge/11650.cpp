#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int t,i,h,m,H,M,tot,dv,p,q,r,s;
   // double p,q;

    cin>>t;

    for(i=0;i<t;i++)
    {
      scanf("%d:%d",&h,&m);

      tot=h*60+m;
      dv=(1440-tot);
     // if(dv!=720)
       //  dv=dv%720;

       H=dv/60;
       if(H>12)
        H=H%12;

       M=dv%60;
        p=M/10;
        q=M%10;
        r=H/10;
        s=H%10;

       printf("%d%d:%d%d\n",r,s,p,q);

       // printf("%2.0lf:%2.0lf",p,q);

    }

}
