#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    double a1,a2,b1,b2,e1,e2,c1,c2,p,q,r,s,X,Y;

    while(cin>>a1>>b1>>e1>>a2>>b2>>e2)
    {
        if(a1==0&&a2==0&&b1==0&&b2==0&&e1==0&&e2==0)
            break;

       c1=-e1; c2=-e2;
       p=b1*c2-b2*c1; r=a2*c1-a1*c2;
       q=a1*b2-a2*b1;

       if(q!=0)
       {
           X=p/q; Y=r/q;
           if(X==0)
            X=0;
           if(Y==0)
            Y=0;

           printf("The fixed point is at %.2lf %.2lf.\n",X,Y);

       }
       else
        cout<<"No fixed point exists."<<endl;

    }

}
