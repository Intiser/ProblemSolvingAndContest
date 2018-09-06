#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

long long int funct(int a){
    long long int sum=0;
    int res=1;
    for(int i=1;sum+i*i<a;i++){
        res = i;
        sum = sum + i*i;
    }
    return res;
}

int main(){
    long long int n,tot,s,ans,t;
    while(cin>>n){
        if(n==0) break;
        s = funct(n);
        t = ((s/6)*(2*s*s+3*s+1));
        tot = n - t;
        ans = (s*(s+1))/2;
        cout<<ans<<endl;
        //ans = ans + (tot/(s+1));
        //cout<<ans<<endl;
    }
}
