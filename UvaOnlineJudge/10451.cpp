#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int i=0,j,n;
    double r,R,l,s,side,Area_r,Area_R,Area_P,Area_T,spct,ofcl,pi;

    while(cin>>n>>Area_P)
    {
        if(n<3)
            break;

         pi=2*acos(0);
        side=sqrt((4*Area_P)/(n*(1/tan(pi/n))));
     l=side/2;
     r=l/tan(pi/n);
     R=l/sin(pi/n);
     Area_r=pi*r*r;
     Area_R=pi*R*R;
     //s=(R+R+side)/2;
    // Area_T=r*side;             //sqrt(s*(s-R)*(s-R)*(s-side));
     //Area_P=Area_T*n;
     spct=Area_R-Area_P;
     ofcl=Area_P-Area_r;
     i++;

     //cout<<Area_r<<" "<<Area_R<<" "<<Area_P<<endl;
     //cout<<r<<" "<<R<<endl;
       // cout<<ofcl<<" "<<spct<<endl;
       printf("Case %d: %.5lf %.5lf\n",i,spct,ofcl);
    }

}
