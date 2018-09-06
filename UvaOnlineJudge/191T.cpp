#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int value(double x, double y, double X1, double Y1, double X2,double Y2)
{
    double d1,d2,D;
    d1= (X1-x)*(Y2-Y1);
    d2= (X2-X1)*(Y1-y);
    D=d1-d2;
    if(D>0) return 1;
    else if(D==0) return 0;
    else return -1;

}

int main()
{
    int t,i,flag;
    double Xs,Xe,Ys,Ye,x1,x2,y1,y2,a,b,c,A,B,P,Q,R,S,T,l,t1,s;
    double d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12,d13,d14,d16,d17;
    double DA,DB,DC,DD,DE,DF,DH,DI;
    double Dx,Dy,D;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>Xs>>Ys>>Xe>>Ye>>x1>>y2>>x2>>y1;
        flag=0;
        //1
        d1=value(Xs,Ys,x1,y2,x2,y2);
        d2=value(Xe,Ye,x1,y2,x2,y2);
        Dx=value(x1,y2,Xs,Ys,Xe,Ye);
        Dy=value(x2,y2,Xs,Ys,Xe,Ye);
        if((Dx>0&&Dy<0)||(Dy>0&&Dx<0))
            D=1;
        else
            D=0;

        if(D==1&&((d1>0&&d2<0)&&(d1<0&&d2>0)))
            flag=1;

        //2
        d3=value(Xs,Ys,x1,y1,x2,y1);
        d4=value(Xe,Ye,x1,y1,x2,y1);
        Dx=value(x1,y1,Xs,Ys,Xe,Ye);
        Dy=value(x2,y1,Xs,Ys,Xe,Ye);
        if((Dx>0&&Dy<0)||(Dy>0&&Dx<0))
            D=1;
        else
            D=0;

        if(D==1&&((d3>0&&d4<0)||(d3<0&&d4>0)))
            flag=1;

        //3
        d1=value(Xs,Ys,x1,y2,x1,y1);
        d2=value(Xe,Ye,x1,y2,x1,y1);
        Dx=value(x1,y2,Xs,Ys,Xe,Ye);
        Dy=value(x1,y1,Xs,Ys,Xe,Ye);
        if((Dx>0&&Dy<0)||(Dy>0&&Dx<0))
            D=1;
        else
            D=0;

        if(D==1&&((d1>0&&d2<0)||(d1<0&&d2>0)))
            flag=1;

          //4
        d1=value(Xs,Ys,x2,y1,x2,y2);
        d2=value(Xe,Ye,x2,y1,x2,y2);
        Dx=value(x2,y1,Xs,Ys,Xe,Ye);
        Dy=value(x2,y2,Xs,Ys,Xe,Ye);
        if((Dx>0&&Dy<0)||(Dy>0&&Dx<0))
            D=1;
        else
            D=0;

        if(D==1&&((d1>0&&d2<0)||(d1<0&&d2>0)))
            flag=1;

            if(flag==1)
                printf("T\n");
            else
                printf("F\n");

    }

}
