#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    int n,m;
    double x1[100],x2[100],y1[100],y2[100],a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,X,Y,p,q,r;

    while(cin>>x1[0]>>y1[0]>>x2[0]>>y2[0])
    {
      cin>>x1[1]>>y1[1]>>x2[1]>>y2[1];


      a1=y2[0]-y1[0]; a2=y2[1]-y1[1];
      d1=x2[0]-x1[0]; b1=-d1; d2=x2[1]-x1[1]; b2=-d2;
      c1=-(y1[0]*(x1[0]-x2[0])-x1[0]*(y1[0]-y2[0])); c2=-(y1[1]*(x1[1]-x2[1])-x1[1]*(y1[1]-y2[1]));

      p=b1*c2-b2*c1;
      q=a2*c1-a1*c2;
      r=a1*b2-a2*b1;

     if(r>0)
     {
         X=p/r; Y=q/r;
         cout<<X<<" "<<Y<<endl;
     }
     else
        cout<<"No"<<endl;

      cout<<a1<<" "<<a2<<endl;
      cout<<b1<<" "<<b2<<endl;
      cout<<c1<<" "<<c2<<endl;
      cout<<p<<" "<<q<<" "<<r<<endl;


    }

}
