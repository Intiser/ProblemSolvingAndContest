#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli arr[10];
char ch[]={'B','G','C'};

lli binn(lli bin,lli type){
    if(bin == 1) return arr[type+3] + arr[type+6];
    if(bin == 2) return arr[type] + arr[type+6];
    if(bin == 3) return arr[type] + arr[type+3];
}

lli comb(lli a,lli b,lli c){
    lli tot = 0;
    tot = tot + binn(1,a);
    tot = tot + binn(2,b);
    tot = tot + binn(3,c);
    return tot;
}

int main()
{
    lli minm,ret;
    int a,b,c;
    while(cin>>arr[0]){
        minm = 0;
        for(int i=1;i<9;i++){
            cin>>arr[i];
            minm = minm + arr[i];
        }
        ret = comb(0,2,1);
        if(ret<minm) {
                minm = ret;
                a = 0 ; b = 2; c = 1;
         }
        ret = comb(0,1,2);
        if(ret<minm) {
                minm = ret;
                a = 0 ; b = 1; c = 2;
         }
        ret = comb(2,0,1);
        if(ret<minm) {
                minm = ret;
                a = 2 ; b = 0; c = 1;
         }
        ret = comb(2,1,0);
        if(ret<minm) {
                minm = ret;
                a = 2 ; b = 1; c = 0;
         }
        ret = comb(1,0,2);
        if(ret<minm) {
                minm = ret;
                a = 1 ; b = 0; c = 2;
         }
        ret = comb(1,2,0);
        if(ret<minm) {
                minm = ret;
                a = 1 ; b = 2; c = 0;
         }
            cout<<ch[a]<<ch[b]<<ch[c]<<" "<<minm<<endl;
    }
}
