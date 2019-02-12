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
/*
#define prmN 2000000

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

double dp[1<<10];
double mns[1<<10];
bool vis[1<<10];
int id[1<<10];
double x[10];
double y[10];
int n;

double dist(int i,int j){
    return sqrt( (x[i] - x[j] ) * (x[i] - x[j] ) + (y[i] - y[j] ) * (y[i] - y[j] ));
}

double dist1(int i,int j){
    cout<<"x  & y "<< x[i]<<" i "<<y[i]<<endl;
    cout<<"x  & y "<< x[j]<<" j "<<y[j]<<endl;
    return sqrt( (x[i] - x[j] ) * (x[i] - x[j] ) + (y[i] - y[j] ) * (y[i] - y[j] ));
}


double rec(int mask,int prv){
    //cout<<mask<<" "<<prv<<endl;
    if(mask+1 == ( (1<< (n)) )){
        return 0;
    }
    if( vis[mask] ) {
        //cout<<"mask "<<" "<<mask <<" "<<dp[mask]<<endl;
        return dp[mask];
    }
    vis[mask] = true;
    double ret = 1000000000;
    int ind = 0;
    double dd = 0;
    for(int i=0;i<n;i++){
        if( ! (mask & (1<<i)) ){

                double d  = dist(prv,i) + 16;
                double r  = rec(mask | (1<<i) , i ) + d;
                //cout<<i<<" "<<r<<endl;
                if( r < ret) {
                    ret = r;
                    ind = i;
                    dd = d;
                    //cout<<i<<" ############# "<<ret<<endl;
                }
                //cout<<r<<" # "<<ret<<endl;
                //cout<<dist(prv,i)<<" ret "<<ret<<" r "<<r<<endl;


        }
    }
    id[mask] = ind;
    mns[mask] = dd;
    return dp[mask] = ret;
}

void rec1(int mask,int prv){
    if( mask+1 == (1 << n)) return;
    cout<<id[mask]<<" "<<dp[mask]<<" per = "<< mns[mask]<<endl;
    //if( prv != -1) cout<<" dist = "<<dist1(prv,id[mask])<<endl;
    int idm = mask;
    mask = mask | (1 << id[mask]);

    rec1(mask,id[idm]);

}


int main(){
    #ifdef ahsan0045
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int t;

    int v,o;
    lli cnt = 0;
    lli sum = 0;
    while(cin>>n){
        if( n == 0) break;
        CLR(dp,0);
        CLR(id,0);
        CLR(vis,0);
        FORL(i,0,n){
            cin>>x[i]>>y[i];
        }

        cout<<rec(1<<0,0)<<endl;
        rec1(1<<0,0);
    }

}






