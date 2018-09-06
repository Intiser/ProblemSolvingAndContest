#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int

lli val(lli n){
    lli tot = n*2;
    lli a = 1;
    lli b  = 1;
    tot = -tot;
    lli x = -b + sqrt(1*1 - 4*tot*a);
    x  = x/2;
    return x;
}

lli funct(lli n){
    lli st = val(n);
    lli tot;
    lli dif;
    bool found = false;
    while(found == false){
        tot = st*(st+1);
        tot = tot / 2;
        if(tot==n) break;
        if(tot>n){
            dif = tot - n;
            if(dif%2==0) return st;
        }
        st++;
    }
    return st;
}

int main(){
    int t;
    lli n;
    lli res;
    cin>>t;
    while(t--){
        cin>>n;
        if(n<0) n = -n;
        if(n==0) res = 3;
        else{
            res = funct(n);
        }
        cout<<res<<endl;
        if(t)  printf("\n");
    }
}
