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
typedef pair < vlong, vlong > pll;
typedef vector<pll> vll;
typedef vector<vlong> vl;


const vlong inf = 1000000000;
const double pi = 2 * acos ( 0.0 );
const double eps = 1e-9;



struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cerr<<v<<" ";
        return *this;
    }
}dbg;


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
//#define ahsan0045


int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

/***********Template Ends Here***********/

#define prmN 2000000
/*
int flag[prmN+10];
int prime[prmN+10];
int ind = 0;

void sieve(){
    flag[0] = 1;
    flag[1] = 1;
    for(int i=4;i<=prmN;i+=2) flag[i]++;
    prime[0] = 2;
    ind = 1;
    for(int i=3;i<=prmN;i+=2){
        if(!flag[i]){
            prime[ind] = i;
            ind++;
            for(int j=i+i;j<=prmN;j+=i)
                flag[j]++;
        }
    }
    //cout<<ind<<endl;
    //cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;
    //cout<<prime[2]<<endl;
}
*/
/********************DONE***************/


//#define ahsan0045

int fsum[105];
int lsum[105];
int arr[105];

lli dp[105][105];
int vis[105][105];

int rec(int st,int en){
    if(st == en) return arr[st];
    if(st > en) return 0;
    if(vis[st][en] == 1) return dp[st][en];
    int mx = -inf;
    int ind = 0;
    vis[st][en] = 1;
    for(int i=st+1;i<=en+1;i++){
        int r = rec(i,en);
        mx = MAX(mx,(( fsum[i-1] - fsum[st-1]) - r) );
        //if(mx == (fsum[i-1] - fsum[st-1]) - r) ind = i;
        //cout<<i<<" "<<en<<" "<<(( fsum[i-1] - fsum[st-1]) ) <<" "<<r<<" "<<(( fsum[i-1] - fsum[st-1]) - r)<<endl;
    }
    for(int i=en-1;i>=st-1;i--){
        int r = rec(st,i);
        mx = MAX(mx,( (lsum[i+1] - lsum[en+1]) - r  ));
        //cout<<st<<" "<<i<<" "<<(( lsum[i+1] - lsum[en+1]) ) <<" "<<r<<" "<<(( lsum[i+1] - lsum[en+1]) - r)<<endl;
        //if(mx == (lsum[i+1] - lsum[en+1]) - r ) ind = i;
    }
    //cout<<st<<" "<<en<<"  "<<mx<<" "<<ind<<endl;
    dp[st][en] = mx;
    return dp[st][en];
}

int main(){
    #ifdef ahsan0045
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
     #endif // ahsan0045
   int t;
   int n;
   double R;
   //cout<<pi<<endl;
   lli nx = 0;
   int a,b;
   int nim = 0;
   sc(t);
   FORE(cas,1,t){
        sc(n);
        CLR(vis,0);
        CLR(dp,0);
        CLR(fsum,0);
        CLR(lsum,0);
        FORE(i,1,n) sc(arr[i]);
        fsum[0] = 0;
        for(int i=1;i<=n;i++){
            fsum[i] = fsum[i-1] + arr[i];
        }
        lsum[n+1] = 0;
        for(int i=n;i>0;i--){
            lsum[i] = lsum[i+1] + arr[i];
        }
        lli ans = rec(1,n);
        //ans = ABS(ans);
        prc(cas);
        printf("%lld\n",ans);
   }
}








