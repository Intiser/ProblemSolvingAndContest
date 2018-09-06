#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    double x1,x2,x3,x4,Xm,Xt,y1,y2,y3,y4,Ym,Yt;

    while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4)
    {
      if(x2==x3&&y2==y3)
      {
        Xm=(x1+x4)/2; Ym=(y1+y4)/2;
        Xt=2*Xm-x3;   Yt=2*Ym-y3;
        printf("%.3lf %.3lf\n",Xt,Yt);
      }
      else if(x2==x4&&y2==y4)
      {
           Xm=(x1+x3)/2; Ym=(y1+y3)/2;
        Xt=2*Xm-x2;   Yt=2*Ym-y2;
        printf("%.3lf %.3lf\n",Xt,Yt);
      }
      else if(x1==x3&&y1==y3)
      {
        Xm=(x2+x4)/2; Ym=(y2+y4)/2;
        Xt=2*Xm-x1;   Yt=2*Ym-y1;
        printf("%.3lf %.3lf\n",Xt,Yt);
      }
      else if(x1==x4&&y1==y4)
      {
             Xm=(x2+x3)/2; Ym=(y2+y3)/2;
        Xt=2*Xm-x1;   Yt=2*Ym-y1;
        printf("%.3lf %.3lf\n",Xt,Yt);
      }



    }



}
