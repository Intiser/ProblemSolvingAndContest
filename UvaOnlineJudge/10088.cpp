#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int

struct nd{
    lli x;
    lli y;
}arr[1050];

int main(){
    int n;
    lli tot;
    double tot1;
    double tt;
    while(cin>>n){
        if(n==0) break;
        tot = 0;
        tt = 0;
        cin>>arr[0].x>>arr[0].y;
        for(int i=1;i<n;i++){
            cin>>arr[i].x>>arr[i].y;
            tot = tot + (arr[i].y*arr[i-1].x - arr[i].x*arr[i-1].y);
            tt  = tt + sqrt((arr[i].x - arr[i-1].x)*(arr[i].x - arr[i-1].x) + (arr[i].y - arr[i-1].y)*(arr[i].y - arr[i-1].y));
        }
        tot = tot + (arr[0].y*arr[n-1].x - arr[0].x*arr[n-1].y);
        tt = tt + sqrt((arr[0].x - arr[n-1].x)*(arr[0].x - arr[n-1].x) + (arr[0].y - arr[n-1].y)*(arr[0].y - arr[n-1].y));
        tot = abs(tot);
        tot1 = tot / 1.0;

        cout<<tot1<<" "<<tt<<endl;
        cout<<tot1 - tt <<endl;
    }
}
