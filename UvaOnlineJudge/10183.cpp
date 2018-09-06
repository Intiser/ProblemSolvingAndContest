#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    double a,b,alp,x,y,m;
    int f,f1,ans;

    while(cin>>a>>b)
    {
          if(a==0&&b==0)
            break;

       alp=(1+sqrt(5))/2;
       m=sqrt(5);
       if(a>1)
       y=log((a-1)*m+.5)/log(alp);
       else if(a==1)
        y=(log((a)*m+.5)/log(alp))-1;
       else
         y=abs(log((a)*m+.5)/log(alp));

       x=log((b)*m+.5)/log(alp);

       f1=floor(x);
       f=floor(y);
       if(b>=a)
       ans=f1-f;
       else
        ans=0;

       cout<<ans<<endl;
       //cout<<x<<" "<<y<<endl;

    }

}
