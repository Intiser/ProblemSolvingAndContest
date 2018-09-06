#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

//Crazy description -_-  -_- of this problem

int main(){
    int t;
    double d,u,v;
    double t1,t2,tt;
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>d>>v>>u;
        if(u==0||v==0||v>=u) {
            printf("Case %d: can't determine\n",k);
        }
        else {
            t1=(d)/(u);
            t2=(d)/(sqrt((u*u)-(v*v)));
            tt=fabs(t2-t1);
            printf("Case %d: %.3lf\n",k,tt);
        }

    }
}
