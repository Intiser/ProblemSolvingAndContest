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

struct tree{
    int x;
    int sm;
    tree(){
    }
};

tree stree[4*501000];
tree ftree[4*501000];
vector<int>xx;
vector<int>yy;
int indx[501000];
int sum[501000];

void init1(int s,int e,int ind){
    if(s == e){
        stree[ind].x = indx[s];
        stree[ind].sm = sum[s];
        //cout<<indx[s]<<" 1# "<<sum[s]<<endl;
        return;
    }
    int m = (s + e) / 2;
    init1(s,m,ind*2);
    init1(m+1,e,ind*2+1);
    stree[ind].x = stree[ind*2+1].x;
    stree[ind].sm = stree[ind*2].sm + stree[ind*2+1].sm;
}

void init2(int s,int e,int ind){
    if(s == e){
        ftree[ind].x = indx[s];
        ftree[ind].sm = sum[s];
        //cout<<indx[s]<<" 2# "<<sum[s]<<endl;
        return;
    }
    int m = (s + e) / 2;
    init2(s,m,ind*2);
    init2(m+1,e,ind*2+1);
    ftree[ind].x = ftree[ind*2+1].x;
    ftree[ind].sm = ftree[ind*2].sm + ftree[ind*2+1].sm;
}

int query1(int s,int e,int ind,int id){
    if(s==e && id < stree[ind].x) return 0;
    if(s==e && id >= stree[ind].x) return stree[ind].sm;
    if(stree[ind].x <= id ) return stree[ind].sm;
    int m = (s + e) / 2;
    int r1 = query1(s,m,ind*2,id);
    int r2 = query1(m+1,e,ind*2+1,id);
    return r1 + r2;
}

int query2(int s,int e,int ind,int id){
    if(s==e && id < ftree[ind].x) return 0;
    if(s==e && id >= ftree[ind].x) return ftree[ind].sm;
    if(ftree[ind].x <= id ) return ftree[ind].sm;
    int m = (s + e) / 2;
    int r1 = query2(s,m,ind*2,id);
    int r2 = query2(m+1,e,ind*2+1,id);
    return r1 + r2;
}



int main(){
    #ifdef ahsan0045
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
     #endif // ahsan0045
   int t;
   int n;
   int q;
   int slast;
   int flast;
   //cout<<pi<<endl;
   lli nx = 0;
   int a,b;
   int nim = 0;
   sc(t);
   FORE(cas,1,t){
     scc(n,q);
     xx.clear(); yy.clear();
     FORL(i,0,n){
        scc(a,b);
        xx.push_back(a); yy.push_back(b);
     }
     sort(xx.begin(),xx.end());
     /*int siz = xx.size();
     int ps = 1;
     indx[1] = xx[0];
     sum[1]  = 1;
     for(int i=1;i<siz;i++){
            if(indx[ps] != xx[i]){
                ps++;
                indx[ps] = xx[i];
                sum[ps] = 0;
                //cout<<xx[i]<<" ok "<<endl;
            }
            sum[ps]++;
     }
     slast = ps;
    // init first one
    init1(1,ps,1);
    //first build end*/
     sort(yy.begin(),yy.end());
    /* siz = yy.size();
     ps = 1;
     indx[1] = yy[0];
     sum[1]  = 1;
     for(int i=1;i<siz;i++){
            if(indx[ps] != yy[i]){
                ps++;
                indx[ps] = yy[i];
                sum[ps] = 0;
            }
            sum[ps]++;
     }
     flast = ps;
     init2(1,ps,1);*/
     int ask;
     prn(cas);
     for(int i=0;i<q;i++){
        sc(ask);
        //int t1 = query1(1,slast,1,ask);
        //int t2 = query2(1,flast,1,ask-1);
        int t1 = lower_bound(xx.begin(),xx.end(),ask+1) - xx.begin();
        //while(xx[t1] > ask && t1 > 0) t1--;
        //cout<<t1<<" "<<t2<<endl;
        int t2 = lower_bound(yy.begin(),yy.end(),ask) - yy.begin();
        //while(yy[t2]==ask&&t2 > 0) t2--;

        printf("%d\n",t1-t2);
     }

   }
}







