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

int cc[200100];
int dd[200100];

int main(){
    int n;
    int c,d;
    while(cin>>n){

            int fl = 0;
            cin>>c>>d;
            if(n==1) {
                if(d==1)
                cout<<"Infinity"<<endl;
                else
                    cout<<1899+c<<endl;
                continue;
            }
            cc[0] = c;
            dd[0] = d;
            int init = 0;
            int neg = 0;
            int pos = 0;
            int stdd = d;
            if(d==1) init = 1900;
            else init = 1899;
            if(c>0) pos = pos + c;
            else neg  = neg + (-c);
            int minm = 1900;
            init = init + c;
            int dif = 1899 - init;
            if(dif >= 0 && minm >dif) minm = dif;
            int chng = 0;
            //cout<<minm<<" "<<init<<endl;

            for(int i=1;i<n;i++){
                cin>>c>>d;
                cc[i] = c;
                dd[i] = d;
                dif = 1899 - init;
                if(dif >= 0 && minm >dif) minm = dif;
                if(pos>neg&&stdd==1&&d==2) fl = 1;
                if(pos<neg&&stdd==2&&d==1) fl = 1;
                if(pos==neg&&stdd!=d) fl = 1;
                if(init>1900&&d==2) init = 1899;
                if(init<1900&&d==1) init = 1900;
                init = init + c;
                if(c>0) pos = pos + c;
                else neg  = neg + (-c);
                if(dd[i]!=dd[i-1]) chng = 1;
                //cout<<minm<<" "<<init<<endl;
                if(init < 0 ) fl = 1;
            }
            //cout<<pos<<" "<<neg<<endl;
            //cout<<chng<<" "<<fl<<" "<<stdd<<endl;
            dif = 1899 - init;
            if(dif >= 0 && minm >dif) minm = dif;
            if(fl==1){
                cout<<"Impossible"<<endl;
            }
            else if(chng==0&&stdd==1){
                cout<<"Infinity"<<endl;
            }
            else if(chng==0&&stdd==2){
                //cout<<pos<<" "<<neg<<endl;
                if(pos>neg)
                    cout<<1899+cc[n-1]<<endl;
                else{
                    cout<<1899 - (neg - pos)<<endl;
                }
            }
            else if(fl==0){
                if(stdd==1)
                    init = init + minm;
                cout<<init<<endl;
            }
            else {
                cout<<"Impossible"<<endl;
            }
    }
}








