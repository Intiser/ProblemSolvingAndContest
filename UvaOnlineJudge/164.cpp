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

int n,m;

int dp[25][25];
int vis[25][25];
string str[25][25];

int edit(string s,int i,string t,int j){
    if(i==n){
        str[i][j] = "";
        return m - (j);
    }
    if(j==m){
        str[i][j] = "";
        return n - (i);
    }
    if(vis[i][j] == 1) return dp[i][j];
    vis[i][j] = 1;
    if(s[i]==t[j]){
        dp[i][j] = edit(s,i+1,t,j+1);
        str[i][j] = str[i+1][j+1];
        return dp[i][j];
    }
    dp[i][j] =  1 + MIN(edit(s,i+1,t,j), MIN(edit(s,i,t,j+1), edit(s,i+1,t,j+1)) );
    string del,ins,repl;

    del.pb('D');
    del.pb(s[i]);
    if(i>8)
    del.pb('1');
    else
    del.pb('0');
    del.pb('0' + ( (i+1)%10));

    ins.pb('I');
    ins.pb(t[j]);
    if(i>8)
    ins.pb('1');
    else
    ins.pb('0');
    ins.pb('0' + ( (i+1)%10));

    repl.pb('C');
    repl.pb(t[j]);
    if(i>8)
    repl.pb('1');
    else
    repl.pb('0');
    repl.pb('0' + ( (i+1)%10));

    str[i][j] = MIN( str[i+1][j] + del , MIN(str[i][j+1] + ins , str[i+1][j+1] + repl ) );
    return dp[i][j];
}

void clr(int n,int m){
    int mx = max(n,m);
    FORE(i,0,mx){
        FORE(j,0,mx) {
            dp[i][j] = 0;
            vis[i][j] = 0;
            str[i][j].clear();
        }
    }
}

int main(){

    string s,t;
    while(cin>>s){
        cin>>t;
        n = s.size();
        m = t.size();
        clr(n,m);
        cout<<edit(s,0,t,0)<<endl;
        cout<<str[0][0]<<endl;
    }
}






