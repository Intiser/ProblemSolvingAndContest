#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
 long long int n,S,total,G;
        double dvd,r,h,m,s,c,rslt,H,M,C;
    while(cin>>n)
    {
        h=n/1000000;
        m=(n/10000)%100;
        s=(n/100)%100;
        c=n%100;
        H=h*60;
         M=(H+m)*60;
         S=(M+s)*100;

        total= S+c;
        C=total;
        dvd=(10000000.0/8640000.0);
        r=dvd*C;
        G=dvd*C;
        rslt=r;


        printf("%.7ld\n",G);

       // cout<<r<<endl;
       // cout<<H<<endl;
        //cout<<M<<endl;
       // cout<<S<<endl;
       // cout<<c<<endl;
       // cout<<total<<endl;
        //cout<<dvd<<endl;
        //cout<<G<<endl;


    }

}
