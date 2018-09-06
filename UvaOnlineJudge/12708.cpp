#include<iostream>
#include<stdio.h>

using namespace std;

long long int gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    long long int t,n,a,b,tmp,ans;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        ans=n/2;
        if(n==1) ans=1;
        printf("%lld\n",ans);
    }
}
