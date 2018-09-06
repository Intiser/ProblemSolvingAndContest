#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define lli long long int


lli a, b, c, d, e, f;

lli mod;
lli dp[10005];
lli vs[10005];

lli fn( int n ) {
     //cout<< n <<endl;
    if(n < 0) return 0;
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(vs[n]) return dp[n]%mod;
    vs[n] = 1;
    lli ret = 0;
    for(int i=1;i<=6;i++){
        ret = ( (ret%mod + fn(n-i)%mod ))%mod;
    }
    dp[n] = ret;
    return ret;
}
int main() {
    mod = 10000007;
    lli n, caseno = 0, cases;
    //fn(10000);
   //cout<<"ret"<<endl;
    scanf("%lld", &cases);
    while( cases-- ) {
        memset(dp,0,sizeof(dp));
        memset(vs,0,sizeof(vs));
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}
