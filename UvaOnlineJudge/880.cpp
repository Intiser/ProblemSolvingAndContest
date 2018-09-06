#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double val,a,b,c,tot;
   // int n,x,y;
    long long int n,x,y,key,term,A,B;

    while(cin>>val)
    {
       // cout<<val<<endl;

       tot=val*2;
        //key=(long long int)val;
        a=1; b=1; c=-tot;
        n=floor((b*b+sqrt(b*b-4*a*c))/(2*a)-1);
        term=(n*(n+1))/2;
        if(term==val)
        {
            x=1; y=n;
        }
        else
        {
          /*  x=n+1; y=1;
            term++;
            while(term!=val)
            {
                x--; y++;
                term++;

            }*/
             x=n+1; y=1;
            term++;
            if(term!=val)
            {
                A=val-term;
                x=x-A;
                y=y+A;

            }



        }

        printf("%lld/%lld\n",x,y);
       // printf("%lld\n",n);


    }

}
