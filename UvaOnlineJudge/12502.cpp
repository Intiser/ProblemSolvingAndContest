#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    double x,y,z,b,dv,tot,p,q;
     int t,i,ans,a;//x,y,z,b,dv,tot,p;

    cin>>t;

    for(i=0;i<t;i++)
    {
     cin>>x>>y>>z;

     tot=x+y;

     dv=tot/3;

     p=(x-dv)*z;


     q=p/dv;
     a=q;
     //ans=floor(a);
if(q<=0)
{
    q=0;
     //cout<<a<<endl;
     printf("%.0lf\n",q);
}
else
   {
       //cout<<a<<endl;
        printf("%.0lf\n",q);
   }

    }

}
