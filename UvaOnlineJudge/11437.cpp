#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double Ax,Ay,Bx,By,Cx,Cy,x1,x2,x3,y1,y2,y3,a1,a2,a3,b1,b2,b3,c1,c2,c3,Xa,Xb,Xc,Ya,Yb,Yc,A,B,C,S,area;
    int t,i;


    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>Ax>>Ay>>Bx>>By>>Cx>>Cy;

        x1=(Bx+2*Ax)/3; y1=(By+2*Ay)/3;
        x2=(Cx+2*Bx)/3; y2=(Cy+2*By)/3;
        x3=(Ax+2*Cx)/3; y3=(Ay+2*Cy)/3;

        cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<" "<<x3<<" "<<y3<<endl;

        a1=(Cy-y1); b1=Cx-x1; c1=((x1)*(y1-Cy)+y1*(x1-Cx))/(x1-Cx);
        a2=(Ay-y2); b2=Ax-x2; c2=((x2)*(y2-Ay)+y2*(x2-Ax))/(x2-Ax);
        a3=(By-y3); b3=Bx-x3; c3=((x3)*(y3-By)+y3*(x3-Bx))/(x3-Bx);

        Xa=(b1*c2-b2*c1)/(a1*b2-a2*b1); Ya=(a1*c2-a2*c1)/(a1*b2-a2*b1);
        Xb=(b2*c3-b3*c2)/(a2*b3-a3*b2); Yb=(a2*c3-a3*c2)/(a2*b3-a3*b2);
        Xc=(b3*c1-b1*c3)/(a3*b1-a1*b3); Yc=(a3*c1-a1*c3)/(a3*b1-a1*b3);

        A=sqrt((Xb-Xa)*(Xb-Xa)+(Yb-Ya)*(Yb-Ya));
        B=sqrt((Xc-Xb)*(Xc-Xb)+(Yc-Yb)*(Yc-Yb));
        C=sqrt((Xa-Xc)*(Xa-Xc)+(Ya-Yc)*(Ya-Yc));

        S=(A+B+C)/2;

        area=sqrt(S*(S-A)*(S-B)*(S-C));

        cout<<area<<endl;


    }

}
