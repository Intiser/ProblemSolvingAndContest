#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n,i,cnt,ans;
    double Xa,Ya,Xb,Yb,x[1000],y[1000],xans,yans,d1,dis,d2,mindis;

    while(cin>>n)
    {
        cin>>Xa>>Ya>>Xb>>Yb;

        for(i=0,ans=0;i<n;i++)
        {
          scanf("%lf %lf",&x[i],&y[i]);


              d1=sqrt((Xa-x[i])*(Xa-x[i])+(Ya-y[i])*(Ya-y[i]));
              d2=sqrt((Xb-x[i])*(Xb-x[i])+(Yb-y[i])*(Yb-y[i]));
              dis=d1*2;

              if(dis<=d2)
              {
                 if(mindis>d1||ans==0){
                  xans=x[i]; yans=y[i];

                   mindis=d1;
                   ans=1;

                 }

              }




        }

        if(ans==0)
        {
            printf("The gopher cannot escape.\n");
        }
        else
           printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",xans,yans);




    }

}
