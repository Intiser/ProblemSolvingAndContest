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
#define prc(c) printf("Case #%d : ",c)
#define prn(c) printf("Case #%d:\n",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)
#define FORL(x,y,z) for(int x = y ; x<z ; x++)
#define FORE(x,y,z) for(int x = y ; x<=z; x++)
#define ROFE(x,y,z) for(int x = y ; x>=z; x--)
#define lli long long int
//#define ahsan0045


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

vector<int> g[105];

int dfs_num[105];
int dfs_low[105];
int dfs_par[105];
int ap[105];
int root;
int chl;
int dcnt;
int cnt;

void art(int u){
    dfs_num[u] = dfs_low[u] = dcnt++;
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        if(dfs_num[v] == -1){
            dfs_par[v] = u;
            if(root == u) chl++;
            art(v);
            //cout<<dfs_low[v]<<" < v  u >  "<<dfs_num[u]<<endl;
            if(dfs_low[v] >= dfs_num[u] && u!= root) {
                ap[u] = 1;
            }
            dfs_low[u] = MIN(dfs_low[u],dfs_low[v]);
        }
        else if(v != dfs_par[u])
        dfs_low[u] = MIN(dfs_low[u],dfs_num[v]);

    }
}


int all(int n){
    CLR(dfs_low,0);
    CLR(dfs_par,0);
    CLR(dfs_num,-1);
    CLR(ap,0);
    dcnt = 0;
    cnt = 0;
    root = 0;
    chl = 0;
    for(int i=1;i<=n;i++){
        if(dfs_num[i] == -1){
            chl = 0;
            root = i;
            art(i);
            if(chl >= 2) ap[i] = 1;
            //cout<<cnt<<endl;
        }
    }
    int c = 0;
    for(int i=1;i<=n;i++)
        if(ap[i] == 1) c++;
    for(int i=0;i<=n;i++) g[i].clear();
    return c;
}

int main(){
    #ifdef ahsan0045
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    int t;
    int n;
    string s;
    while(cin>>n){
        if(n == 0) break;
        cin.ignore();
        while(getline(cin,s)){
            if(s == "0") break ;
            int u = 0;
            int st;
            //cout<<u<<endl;
            u = s[0] - '0';
            st = 1;
            if(s[1]!=' '){
                u = u*10 + (s[1] - '0');
                st = 2;
            }
            int siz = s.size();
            int v = 0;
            int fl = 0;
            //cout<<u<<endl;
            for(int i=st;i<siz;i++){
                if(s[i] != ' '){
                    fl = 1;
                    v = v*10 + (s[i] - '0');
                }
                else if(fl == 1 ){
                    g[u].pb(v);
                    g[v].pb(u);
                    //cout<<v<<endl;
                    fl = 0;
                    v = 0;
                }
            }
            if(fl == 1){
                    g[u].pb(v);
                    g[v].pb(u);
                    //cout<<v<<endl;
                    fl = 0;
                    v = 0;
                    //cout<<v<<endl;
            }
        }
        cout<<all(n)<<endl;

    }
}




