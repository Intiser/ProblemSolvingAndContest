#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int t,i;
    double Xs,Xe,Ys,Ye,x1,x2,y1,y2,a,b,c,A,B,P,Q,R,S,T,l,t1,s;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>Xs>>Ys>>Xe>>Ye>>x1>>y2>>x2>>y1;

        if((Xs>=x1&&Xs<=x2)&&(Ys>=y1&&Ys<=y2))
            cout<<"T"<<endl;
       else if((Xe>=x1&&Xe<=x2)&&(Ye>=y1&&Ye<=y2))
            cout<<"T"<<endl;
        else if((Ys>y2&&Ye<y2)||(Ye>y2&&Ys<y2)||(Ys>y1&&Ye<y1)||(Ye>y1&&Ys<y1)||(Xs>x2&&Xe<x2)||(Xe>x2&&Xs<x2)||(Xs>x1&&Xe<x1)||(Xe>x1&&Xs<x1))
        {l=0;
                a=sqrt((Xs-x1)*(Xs-x1)+(Ys-y1)*(Ys-y1));
                b=sqrt((Xs-x2)*(Xs-x2)+(Ys-y2)*(Ys-y2));
                c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

                s=(a+b+c)/2;
                t1=sqrt(s*(s-a)*(s-b)*(s-c));
                A=asin((2*t1)/(a*b));

                 a=sqrt((Xs-x1)*(Xs-x1)+(Ys-y1)*(Ys-y1));
                b=sqrt((Xs-Xe)*(Xs-Xe)+(Ys-Ye)*(Ys-Ye));
                c=sqrt((x1-Xe)*(x1-Xe)+(y1-Ye)*(y1-Ye));

                   s=(a+b+c)/2;
                t1=sqrt(s*(s-a)*(s-b)*(s-c));
                P=asin((2*t1)/(a*b));


                 a=sqrt((Xs-x2)*(Xs-x2)+(Ys-y2)*(Ys-y2));
                b=sqrt((Xs-Xe)*(Xs-Xe)+(Ys-Ye)*(Ys-Ye));
                c=sqrt((x2-Xe)*(x2-Xe)+(y2-Ye)*(y2-Ye));

                    s=(a+b+c)/2;
                t1=sqrt(s*(s-a)*(s-b)*(s-c));
                Q=asin((2*t1)/(a*b));

                if(P>A||Q>A)
                    l=1;

                 a=sqrt((Xs-x1)*(Xs-x1)+(Ys-y2)*(Ys-y2));
                b=sqrt((Xs-x2)*(Xs-x2)+(Ys-y1)*(Ys-y1));
                c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

                s=(a+b+c)/2;
                t1=sqrt(s*(s-a)*(s-b)*(s-c));
                B=asin((2*t1)/(a*b));

                  a=sqrt((Xs-x1)*(Xs-x1)+(Ys-y2)*(Ys-y2));
                b=sqrt((Xs-Xe)*(Xs-Xe)+(Ys-Ye)*(Ys-Ye));
                c=sqrt((x1-Xe)*(x1-Xe)+(y2-Ye)*(y2-Ye));

                s=(a+b+c)/2;
                t1=sqrt(s*(s-a)*(s-b)*(s-c));
                R=asin((2*t1)/(a*b));

                    a=sqrt((Xs-x2)*(Xs-x2)+(Ys-y1)*(Ys-y1));
                b=sqrt((Xs-Xe)*(Xs-Xe)+(Ys-Ye)*(Ys-Ye));
                c=sqrt((x2-Xe)*(x2-Xe)+(y1-Ye)*(y1-Ye));

                s=(a+b+c)/2;
                t1=sqrt(s*(s-a)*(s-b)*(s-c));
                S=asin((2*t1)/(a*b));

                if(R>B||S>B)
                    l=1;


                if(l==1)
                    cout<<"F"<<endl;
                else
                    cout<<"T"<<endl;



         }
         else
            cout<<"F"<<endl;

    }

}
