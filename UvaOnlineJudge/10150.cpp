/***********Template Starts Here***********/
//#include <bits/stdc++.h>
#include <stdio.h>
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

struct node{
    char s[20];
    int step;
    node(){
    }
};

int fre[20];
int n;
char all[20][26000][20];
char ok[26000][20];
map<string,int>vis;
map<string,int>ind;
vector<string>sol;
int par[26000];

bool check(char s[],char t[]){
    if(strlen(s) != strlen(t)) return false;
    int siz = strlen(s);
    int cnt = 0;
    FORL(i,0,siz){
        if(s[i]!=t[i]) cnt++;
    }
    //cout<<s<<" "<<t<<" "<<cnt<<endl;
    if(cnt==1) return true;
    return false;
}

int bfs(char st[],char en[]){
    if(strlen(st)!=strlen(en)) return -1;
    vis.clear();
    sol.clear();
    CLR(par,0);
    int ss = ind[st];
    par[ss] = ss;
    queue<char*>q;
    q.push(st);
    vis[st] = 1;
    int siz = strlen(st);
    while(!q.empty()){
        char *now = new char[20];
        now = q.front();
        q.pop();
        int pp = ind[now];
        //cout<<now.s<<" "<<now.step<<endl;
        if(strcmp(now,en) == 0) return 1;
        node no;

        FORL(i,0,fre[siz]){


            if(!vis[all[siz][i]]&&check(now,all[siz][i])==true){


                q.push(all[siz][i]);
                vis[all[siz][i]] = 1;
                int p = ind[all[siz][i]];
                par[p] = pp;

            }
        }

    }
    return -1;
}

void get(int v){
    //cout<<v<<endl;
    while(par[v] != v && par[v]!=0){
        puts(ok[v]);
        v = par[v];

    }
    printf("%s\n",ok[v]);
    //get(par[v]);
    //printf("%s\n",ok[v]);


}

void print(){
    int siz = sol.size();
    FORL(i,0,siz){
        cout<<sol[i]<<endl;
    }
}

int main(){
    #ifdef ahsan0045
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    char s[20];
    char t[20];
    char c[20];
    int st = 1;
    while(gets(ok[st])){
        int siz = strlen(ok[st]);
        if(siz == 0) break;
        strcpy(all[siz][fre[siz]],ok[st]);
        ind[ok[st]] = st;
        fre[siz]++;
        st++;
        //cout<<fre[siz]<<" "<<st<<endl;

    }
    n = st;
    int strt = 0;
    while(scanf("%s %s",s,t)==2){
        if(strt) printf("\n");
        int ans = bfs(t,s);
        //cout<<ans<<endl;
        if(ans != -1 ){
            get(ind[s]);

        }
        else{
            printf("No solution.\n");
        }
        strt = 1;
    }
}




