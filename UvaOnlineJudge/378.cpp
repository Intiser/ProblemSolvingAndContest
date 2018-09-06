#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int t,i;

    double x1,x2,x3,x4,y1,y2,y3,y4,a1,b1,c1,a2,b2,c2,p,q,r,s,m,n,X,Y,T1,T2;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        c1=-((-x1)*(y1-y2)+y1*(x1-x2));  //(x1-x2);
        p=(y2-y1);
        q=(x2-x1);
        a1=p;
        b1=-q;

          c2=-((-x3)*(y3-y4)+y3*(x3-x4)); //(x3-x4);
        r=(y4-y3);
        s=(x4-x3);
        a2=r;
        b2=-s;

        m=(a1*b2-a2*b1);              //(b1*c2-b2*c1);
        n= (a1*b2-a2*b1);               // (a2*c1-a1*c2);
        if(m!=0&&n!=0)
        {
            X=(b1*c2-b2*c1)/m;          //m/(a1*b2-a2*b1);
            Y=(a2*c1-a1*c2)/n;           //n/(a1*b2-a2*b1);
        }

      T1= x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
      T2= x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3);

     //cout<<T1<<" "<<T2<<endl;

        if(i==0)
         cout<<"INTERSECTING LINES OUTPUT"<<endl;


        if(T1==0&&T2==0)
            cout<<"LINE"<<endl;
        else if(m==0||n==0)
            cout<<"NONE"<<endl;
        else
           {
            cout<<"POINT"<<" ";printf("%.2lf %.2lf\n",X,Y);
           }


           if(i==t-1)
            cout<<"END OF OUTPUT"<<endl;

    }



}
