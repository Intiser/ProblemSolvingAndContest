#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{

    double n,p,ans,D,V,R,vol_H,vol,d,r;

    while(cin>>D>>V)
    {
        R=D/2;
        vol_H=M_PI*R*R*D;
        vol=vol_H-V;
        r=(4*vol/M_PI);
        p=3;
       ans=pow(r,1.0/p);
       cout<<ans<<endl;
       //cout<<R<<endl;
       //cout<<vol_H<<endl;
       //cout<<r<<endl;

    }

}
