#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    double ans,tot,x,y,z,rat1,rat2;
    while(cin>>x>>y>>z){
        tot = x + y;
        rat1 = (x*y)/(tot*(tot-z-1));
        rat2 = (y*(y-1))/((tot-z-1)*tot);
        ans = rat1 + rat2;
        //cout<<ans<<endl;
        printf("%.5lf\n",ans);
    }
}
