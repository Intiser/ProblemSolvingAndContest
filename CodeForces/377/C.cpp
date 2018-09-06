#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli maxm(lli a,lli b){
    if(a>b) return a;
    return b;
}

lli minm(lli a,lli b){
    if(a>b) return b;
    return a;
}

int main(){
    lli b,d,s;
    lli mx;
    lli m1,m2,m3;
    lli m4,m5,m6;
    lli m7,m8,m9;
    lli mn;
    cin>>b>>d>>s;
    mx = maxm(maxm(b,d),s);
    // already accepted
       /*if(b==mx){
            if(b == s &&d == b){
                mn = 0;
            }
            else if(b == s && d < b){
                mn = mx - 1 - d;
            }
            else if(b == d && s < b){
                mn = mx - 1 - s;
            }
            else if( d == mx - 1 &&s<(mx-1)){
                mn = mx - 1  - s;
            }
            else if(s == mx -1 && d < (mx-1)){
                mn = mx - 1 - d;
            }
            else{
                mn = (mx - s - 1) + (mx - d - 1);
            }
       }
       else if(d==mx){
            if(s == mx ){
                mn = mx - 1 - b;
            }
            else if(b == mx - 1 && s< (mx -1)){
                mn = mx - 1 - s;
            }
            else if(s == mx - 1 && b < (mx - 1)){
                mn = mx - 1 - b;
            }
            else {
                mn = (mx - 1 - b) + (mx - 1 - s);
            }
       }
       else{
            mn = (mx - 1 - d) + (mx  - 1 - b);
       }
       //cout<<mn<<endl;
       */
       if(b==mx){
            mn = 0;
            if(d < mx - 1){
                mn += (mx - 1 - d);
            }
            if(s < mx - 1){
                mn += (mx - 1 - s);
            }
       }
       else if(d == mx){
            mn = mx - 1 - b;
            if(s<mx-1)
                mn += mx - 1 - s;
       }
       else{
            mn = (mx - 1 - b) + (mx - 1 - d);
       }
       printf("%lld\n",mn);
}
