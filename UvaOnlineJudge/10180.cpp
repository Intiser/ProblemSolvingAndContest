#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int t,i,j;          //test case and loop integers
    double X1,Y1,X2,Y2,R;    //input variables
    double dis,d1,d2,h,s;        //distances between coordinates and altitude
    double S,P_S,v1,v2;    //triangles ans circle variables
    double ang1,ang2,f_ang,angle;// angles
    double tot_length;

    cin>>t;

    for(i=0;i<t;i++)
    {
       cin>>X1>>Y1>>X2>>Y2>>R;

       d1=sqrt((X1-0)*(X1-0)+(Y1-0)*(Y1-0));
       d2=sqrt((X2-0)*(X2-0)+(Y2-0)*(Y2-0));
       dis=sqrt((X2-X1)*(X2-X1)+(Y2-Y1)*(Y2-Y1));

       s=(d1+d2+dis)/2;
       h=(2*sqrt(s*(s-d1)*(s-d2)*(s-dis)))/dis;

       if(R>h&&(dis>d1&&dis>d2))
        {
           if(h==0)
          {
              angle=M_PI;
          }
          else
          {
              angle=acos((d1*d1+d2*d2-dis*dis)/(2*d1*d2));
          }

          v1=sqrt(d1*d1-R*R);
          v2=sqrt(d2*d2-R*R);

          ang1=acos(R/d1);
          ang2=acos(R/d2);

          f_ang=angle-(ang1+ang2);

          S=2*M_PI*R;
          P_S=(S*f_ang)/(2*M_PI);

          tot_length=v1+v2+P_S;

        }
        else
        {
            tot_length=dis;
        }


       printf("%.3lf\n",tot_length);

    }

}
