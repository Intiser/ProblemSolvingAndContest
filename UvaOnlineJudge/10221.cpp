#include<iostream>
#include<math.h>
#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    double deg,pos,R,s,r=6440,arc,len,ang,l,h,p;
    int a;
    char c[10];

    while(cin>>s>>a>>c)
    {
         if(strcmp(c,"deg")==0)
         {
             deg=a%360;
             if(deg>180)
                deg=360-deg;


             pos=((deg*M_PI)/360);

         }
         else if(strcmp(c,"min")==0)
         {
             a=a%21600;
             p=a;
             deg=p/60;
             if(deg>180)
                deg=360-deg;

             pos=((deg*M_PI)/360);

         }


       R=6440+s;

       arc=(M_PI*R*deg)/180;



       l=R*sin(pos);
       //l=sqrt(R*R-h*h);
       len=2*l;



    printf("%.6lf %.6lf\n",arc,len);

       //cout<<arc<<" "<<len<<endl;
       // cout<<s<<" "<<a<<" "<<c<<endl;;
       // pos=360/deg;
       //cout<<sin((2*M_PI)/pos)<<endl;
    }

}
