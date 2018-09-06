#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define sccl(x,y) scanf("%lld %lld",&x,&y)
#define sccc(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define scccl(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define prc(c) printf("Case %d: ",c)
#define prn(c) printf("Case %d:\n",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)
#define lli long long int

inline lli power ( lli a, lli p ) {
    lli res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}


int main(){
    lli val = 8;
    lli n;
    while(cin>>n){
        if(n==0) cout<<1<<endl;
        else if(n%4==0) cout<<6<<endl;
        else if(n%4==1) cout<<8<<endl;
        else if(n%4==2) cout<<4<<endl;
        else if(n%4==3) cout<<2<<endl;
    }
}

