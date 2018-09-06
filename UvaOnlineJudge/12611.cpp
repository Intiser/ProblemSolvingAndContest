#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,r,i,j,p1,q1,p2,q2;
    double x1,y1,x2,y2,l,w;

    cin>>t;
    for(i=0;i<t;i++)
    {
       cin>>r;
        l=r*5;
        w=r*3;

       x1=0-((l*45)/100);
       x2=l+x1;
       y1=0-((w*50)/100);
       y2=w+y1;
       p1=x1; p2=x2; q1=y1; q2=y2;

        cout<<"Case "<<i+1<<":"<<endl;

        printf("%d %d\n",p1,q2);           //cout<<x1<<" "<<y2<<endl;
        printf("%d %d\n",p2,q2);           //cout<<x2<<" "<<y2<<endl;
        printf("%d %d\n",p2,q1);           //cout<<x2<<" "<<y1<<endl;
        printf("%d %d\n",p1,q1);           //cout<<x1<<" "<<y1<<endl;


    }

}
