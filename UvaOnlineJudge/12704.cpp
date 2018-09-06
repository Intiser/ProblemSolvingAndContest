#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    int t;
    double x,y,r,d;
    double X=0,Y=0;
    double mini,maxi,dis;
    cin>>t;
    while(t--){
        cin>>x>>y>>r;
        d = 2*r;
        dis = sqrt((x-X)*(x-X)+(y-Y)*(y-Y));
        mini = r - dis;
        maxi = r + dis;
        printf("%.2lf %.2lf\n",mini,maxi);
    }

}
