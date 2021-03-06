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


const vlong inf = 2147383647;
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

//int dx[] = {-1,1,0,0};
//int dy[] = {0,0,-1,1};

/***********Template Ends Here***********/
/*
int flag[50005];
int prime[50005];
int ind = 0;

void sieve(){
    flag[0] = 1;
    flag[1] = 1;
    for(int i=4;i<=50000;i+=2) flag[i]++;
    prime[0] = 2;
    ind = 1;
    for(int i=3;i<=50000;i+=2){
        if(!flag[i]){
            prime[ind] = i;
            ind++;
            for(int j=i+i;j<=50000;j+=i)
                flag[j]++;
        }
    }
   // cout<<prime[0]<<endl;
   // cout<<prime[1]<<endl;
   // cout<<prime[2]<<endl;
}
*/
/********************DONE***************/

vector<int>g[1050];
vector<int>nr[1050];
vector<int>spcl;


int spec[1050];
int connec[1050];
lli all[1050];
int p[1050];
int tata[1050];
int mat[1050][1050];
pair<int,int> enty[1050];

int findP(int u){
    if(p[u]==u) return u;
    p[u] = findP(p[u]);
    return p[u];
}

void Union(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(spec[pu]==1) p[pv] = p[pu];
    else if(spec[pv]==1) p[pu] = p[pv];
    else p[pv] = p[pu];
}




int main(){
    int n,m,k;
    int a;
    int arr[1050];
    sccc(n,m,k);
    FORL(i,0,k){
        sc(a);
        arr[i] = a;
        spec[a] = 1;
        connec[a] = a;
        spcl.pb(a);
        if(i!=0){
            enty[a].first = arr[i-1];
            enty[arr[i-1]].second = a;
        }
        else
            enty[a].first = -1;

    }
    enty[k-1].second = -1;
    FORE(i,1,n) p[i]= i;
    int u,v;
    FORL(i,0,m){
        scc(u,v);
        g[u].pb(v);
        g[v].pb(u);
        mat[u][v] = 1;
        mat[v][u] = 1;
        Union(u,v);
    }
    //cout<<"yes"<<endl;
    lli tt = 0;
    lli ase = 0;
    lli lagbe = 0;
    FORE(i,1,n){
        int p = findP(i);
        tata[p]++;
        all[p] += g[i].size();
        if(spec[i]==0&&spec[p]==0){
            tt ++;
            ase += g[i].size();
        }
    }
    //cout<<"yes"<<endl;
    lagbe = (tt*(tt-1))/2 - ase/2;
    lli mxxxx = 0;
    FORL(i,0,spcl.size()){
        int p = spcl[i];
        lli tpp = tata[p] + tt;
        //cout<<tpp<<" "<<tata[p]<<" "<<tt<<endl;
        //cout<<ase<<" "<<all[p]<<endl;
        lli tp = (tpp * (tpp-1))/2  - (all[p]/2 + ase/2);
        if(mxxxx< tp) mxxxx = tp;
    }
    cout<<mxxxx<<endl;*/

}




