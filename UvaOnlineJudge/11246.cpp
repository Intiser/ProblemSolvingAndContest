#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli res(lli t,lli k){
    if(t==k) return t-1;
    if(t<k) return t;
    int i=0;
    lli tot = t;
    lli dlt = 0;
    while(t/k){
        if(i%2==0){
            dlt = dlt + t/k;
        }
        else{
           dlt = dlt - t/k;
        }
        t = t/k;
        i++;
    }
    tot = tot - dlt;
    return tot;
}

int main(){
    lli n,k,t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<res(n,k)<<endl;
    }
}
