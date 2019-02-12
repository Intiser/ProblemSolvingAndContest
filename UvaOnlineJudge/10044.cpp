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

map<string,int>indx;
int ind;

vector<int>con;

int check(string s){
    if(!indx[s]){
        indx[s] = ind;
        ind++;
    }
    return indx[s];
}

struct node{
    int u;
    int step;
};

lli dist[10050];
vector<int>g[10050];
int vis[10050];

void bfs(int u){
    dist[u] = 0;
    queue<node>q;
    node no;
    no.u = u;
    no.step = 0;
    q.push(no);
    vis[u] = 1;
    node nw;
    while(!q.empty()){
        no = q.front();
        q.pop();
        int u = no.u;
        for(int i=0;i<g[u].size();i++){
            int v = g[u][i];
            if(vis[v] == 0){
                vis[v] = 1;
                nw.u = v;
                nw.step = no.step + 1;
                dist[v] = nw.step;
                q.push(nw);
            }
        }
    }
}


int main(){
    #ifdef ahsan0045
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif
    int t;
    int n,m;
    int a,b,c;
    string s;
    string nm;
    sc(t);
    FORE(cas,1,t){
        scc(n,m);
        ind = 1;
        indx.clear();
        check("Erdos, P.");
        cin.ignore();
        FORE(j,1,n){
            getline(cin,s);
            con.clear();
            int siz = s.size();
            int cm = 0;
            int fl = 0;
            int v = 0;
            nm.clear();
            for(int i=0;i<siz;i++){
                if(s[i]==':'){
                     v = check(nm);
                     //cout<<nm<<" "<<v<<endl;
                      cm = 0;
                      fl = 0;
                      nm.clear();
                      con.push_back(v);
                      break;
                }
                else if( (s[i]==',' && cm == 1 ) ){
                      v = check(nm);
                      //cout<<nm<<" "<<v<<endl;
                      cm = 0;
                      fl = 0;
                      nm.clear();
                      con.push_back(v);
                }
                else if(fl == 1){
                    nm.push_back(s[i]);
                    if(s[i] == ',') cm++;
                }
                else if(s[i]!=' '){
                    fl = 1;
                    nm.push_back(s[i]);
                }

            }
            int sizc = con.size();
            FORL(i,0,sizc)
                FORL(k,i+1,sizc){
                   int x = con[i];
                   int y = con[k];
                    g[x].pb(y);
                    g[y].pb(x);
                }

        }
        FORE(i,0,ind+1) dist[i] = inf;
        CLR(vis,0);
        bfs(1);
        printf("Scenario %d\n",cas);
        FORL(i,0,m){
            getline(cin,s);
            int u = check(s);
            if(dist[u]!=inf)
            cout<<s<<" "<<dist[u]<<endl;
            else
            cout<<s<<" infinity"<<endl;
        }
        FORE(i,0,ind+1){
            g[i].clear();
        }

    }

}



