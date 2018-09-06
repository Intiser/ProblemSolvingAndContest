#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
   // int l,w,h,d;
    double l,w,h,d,p,t_l,area_r,area_t,area_f,ans,a,an;

    while(cin>>l>>w>>h>>d)
    {
        area_r=l*w*h;
        if(d==0)
        {
             printf("%.3lf mL\n",area_r);
        }
        else if(d==90)
        {
            a=0;
            printf("%.3lf mL\n",a);
        }
        else
        {


        p=360/d;
        t_l=l*tan((2*M_PI)/p);
        if(t_l<=h)
        {
        area_f=(w*t_l*l)/2;

        ans=area_r-area_f;
         printf("%.3lf mL\n",ans);
        }
        else
        {
            p=360/(90-d);
            t_l=h*tan((2*M_PI)/p);
            area_f=(w*t_l*h)/2;

        //ans=area_r-area_f;
         printf("%.3lf mL\n",area_f);

        }




        }


    }







}

