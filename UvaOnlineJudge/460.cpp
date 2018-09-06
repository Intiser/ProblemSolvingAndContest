#include<iostream>

using namespace std;

int main()
{
    int x1,x2,y1,y2,X1,X2,Y1,Y2,Xa,Xb,Ya,Yb,t,i,n;


       cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>X1>>Y1>>X2>>Y2;
         t=1;

         if(x1==X1&&x2==X2&&y1==Y1&&y2==Y2)
        {
            Xa=X1; Ya=Y1;
            Xb=X2; Yb=Y2;
        }
        else if(x2>X1&&x2<X2&&y1>Y1&&y1<Y2)
        {
            if(x2>X1&&x2<X2&&y2>Y1&&y2<Y2)
            {
                Xa=X1; Ya=y1;
                Xb=x2; Yb=y2;

            }
            else if(x1>X1&&x1<X2&&y1>Y1&&y1<Y2)
            {
                Xa=x1; Ya=y1;
                Xb=x2; Yb=Y2;
            }
            else
            {
                Xa=X1; Ya=y1;
                Xb=x2; Yb=Y2;
            }

        }
        else if(x2>X1&&x2<X2&&y2>Y1&&y2<Y2)
        {

            if(x1>X1&&x1<X2&&y2>Y1&&y2<Y2)
            {
                Xa=x1; Ya=Y1;
                Xb=x2; Yb=y1;
            }
            else
            {
                Xa=X1; Ya=Y1;
                Xb=x2; Yb=y2;
            }
        }
        else if(x1>X1&&x1<X2&&y2>Y1&&y2<Y2)
        {
            if(x1>X1&&x1<X2&&y1>Y1&&y1<Y2)
            {
                Xa=x1; Ya=y1;
                Xb=X2; Yb=y2;
            }
            else
            {
                Xa=x1; Ya=Y1;
                Xb=X2; Yb=y2;
            }
        }
        else if(x1>X1&&x1<X2&&y1>Y1&&y1<Y2)
        {
                Xa=x1; Ya=y1;
                Xb=X2; Yb=Y2;

        }
        else if(X2>x1&&X2<x2&&Y1>=y1&&Y2<=y2)
        {
              Xa=X1; Ya=Y1;
              Xb=x2; Yb=Y2;
        }
        else if(X2>x1&&X2<x2&&Y1>=y1&&Y2<=y2)
        {
             Xa=x1; Ya=Y1;
             Xb=X2; Yb=Y2;

        }
        else if(Y1>y1&&Y1<y2&&X1>=x1&&X2<=x2)
        {
             Xa=X1; Ya=Y1;
             Xb=X2; Yb=y2;

        }
        else if(Y2>y1&&Y2<y2&&X1>=x1&&X2<=x2)
        {
             Xa=X1; Ya=Y1;
             Xb=x2; Yb=Y2;

        }
        else if(y1>Y1&&y2<Y2&&x1<=X1&&x2>=X2)
        {
           Xa=X1; Ya=y1;
           Xb=X2; Yb=y2;

        }
        else if(Y1>y1&&Y2<y2&&X1<=x1&&X2>=x2)
        {
            Xa=x1; Ya=Y1;
            Xb=x2; Yb=Y2;
        }
        else if(x1>X1&&x2<X2&&y1>Y1&&y2<Y2)
        {
            Xa=x1; Ya=y1;
            Xb=x2; Yb=y2;
        }
        else if(x1<X1&&x2>X2&&y1<Y1&&y2>Y2)
        {
            Xa=X1; Ya=Y1;
            Xb=X2; Yb=Y2;
        }

        else
            t=0;

          if(t==0)
          {
            cout<<"No Overlap"<<endl;
          }
          else
            cout<<Xa<<" "<<Ya<<" "<<Xb<<" "<<Yb<<endl;

            cout<<endl;

    }


}
