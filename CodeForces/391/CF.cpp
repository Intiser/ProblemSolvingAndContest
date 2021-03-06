/***********Template Starts Here***********/
//#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>
#include <queue>
#include <stack>
#include <vector>
#include <deque>
#include <functional>
#include <string>
#include <iostream>
#include <cctype>
#include <set>
#include <climits>
#include <iomanip>
#include <cassert>
#include <sstream>

#define pb push_back
#define nl puts ("")
#define sp printf ( " " )
#define phl printf ( "hello\n" )
#define ff first
#define ss second
#define POPCOUNT __builtin_popcountll
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
#define MP make_pair
#define CLR(x,y) memset(x,y,sizeof(x))
#define UNIQUE(V) (V).erase(unique((V).begin(),(V).end()),(V).end())
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
#define NUMDIGIT(x,y) (((vlong)(log10((x))/log10((y))))+1)
#define SQ(x) ((x)*(x))
#define ABS(x) ((x)<0?-(x):(x))
#define FABS(x) ((x)+eps<0?-(x):(x))
#define ALL(x) (x).begin(),(x).end()
#define LCM(x,y) (((x)/gcd((x),(y)))*(y))
#define SZ(x) ((vlong)(x).size())
#define NORM(x) if(x>=mod)x-=mod;
#define MOD(x,y) (((x)*(y))%mod)
#define ODD(x) (((x)&1)==0?(0):(1))

using namespace std;

typedef long long vlong;
typedef unsigned long long uvlong;

const vlong inf = 2147383647;
const double pi = 2 * acos ( 0.0 );
const double eps = 1e-9;


inline vlong gcd ( vlong a, vlong b ) {
    a = ABS ( a ); b = ABS ( b );
    while ( b ) { a = a % b; swap ( a, b ); } return a;
}

vlong ext_gcd ( vlong A, vlong B, vlong *X, vlong *Y ){
    vlong x2, y2, x1, y1, x, y, r2, r1, q, r;
    x2 = 1; y2 = 0;
    x1 = 0; y1 = 1;
    for (r2 = A, r1 = B; r1 != 0; r2 = r1, r1 = r, x2 = x1, y2 = y1, x1 = x, y1 = y ) {
        q = r2 / r1;
        r = r2 % r1;
        x = x2 - (q * x1);
        y = y2 - (q * y1);
    }
    *X = x2; *Y = y2;
    return r2;
}

inline vlong modInv ( vlong a, vlong m ) {
    vlong x, y;
    ext_gcd( a, m, &x, &y );
    x %= m;
    if ( x < 0 ) x += m; //modInv is never negative
    return x;
}

inline vlong power ( vlong a, vlong p ) {
    vlong res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}

inline vlong bigmod ( vlong a, vlong p, vlong m ) {
    vlong res = 1 % m, x = a % m;
    while ( p ) {
        if ( p & 1 ) res = ( res * x ) % m;
        x = ( x * x ) % m; p >>= 1;
    }
    return res;
}


/***********Extended****************/

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
#define FORL(x,y,z) for(int x = y ; x<z ; x++)
#define FORE(x,y,z) for(int x = y ; x<=z; x++)
#define ROFE(x,y,z) for(int x = y ; x>=z; x--)
#define lli long long int

//int dx[] = {-1,1,0,0};
//int dy[] = {0,0,-1,1};

typedef pair < vlong, vlong > pll;
typedef vector<pll> vll;
typedef vector<vlong> vl;

/***********Template Ends Here***********/
/*
int flag[150005];
int prime[150005];
vector<int>prms[150100];
int ind = 0;
int freq[150005];

void sieve(){
    flag[0] = 1;
    flag[1] = 1;
    for(int i=4;i<=150000;i+=2){
        flag[i]++;
        prms[i].pb(2);
    }
    prms[2].pb(2);
    prime[0] = 2;
    ind = 1;
    for(int i=3;i<=150000;i+=2){
        if(!flag[i]){
            prime[ind] = i;
            prms[i].pb(i);
            ind++;
            for(int j=i+i;j<=150000;j+=i){
                flag[j]++;
                prms[j].pb(i);
            }
        }
    }
    //cout<<ind<<endl;
    //cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;
    //cout<<prime[2]<<endl;
}
*/
/********************DONE***************/

lli dp[1000100];
lli mod;

void funct(){
    dp[0] = 1;
    for(int i=1;i<=1000000;i++){
        dp[i] =((dp[i-1]%mod) * (i%mod))%mod ;
    }
}

int freq[1000100];
int freq2[1000100];
int div2[1000100];
int ind[1000100];
int gr[1000100];

int main(){
    mod = 1000000007;
    funct();
    int n,m;
    int g;
    int a;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
      cin>>g;
       for(int j=0;j<g;j++){
            cin>>a;

            if(freq[a] == 0 ){
                freq[a] = i;
                freq2[a]++;
            }
            else if( freq[a]!= 0 && freq[a]!= i){
                freq[a] = -1;
                div2[a] = 1;
            }
            else if(freq[a]==i){
                freq2[a]++;
                div2[a] = freq2[a];
            }


       }
       //cout<<gr[i]<<endl;
    }
    int cnt = 0;
    for(int i=1;i<=m;i++){
        int u = freq[i];
        if(u!=1||u!=0){
            gr[u] += freq2[i];

        }
        if(u==0) cnt++;
        //cout<<u<<endl;
    }

    lli ans = 1;
    for(int i=1;i<=n;i++){
        //cout<<freq[i]<<endl;
        int u = gr[i];
        ans = ((ans % mod) * (dp[u+cnt]%mod))%mod;
    }
    for(int i=1;i<=m;i++){
        if(div2[i]>1) {
            ans = ( (ans%mod) * (modInv(dp[div2[i]],mod)%mod))%mod;
        }
        //cout<<u<<endl;
    }
    if(ans == 0) ans = 1;
    cout<<ans<<endl;
}




