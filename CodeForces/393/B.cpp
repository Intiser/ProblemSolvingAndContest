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

#define MX 10000000
bool flag[MX+5];
int prime[MX+5];
int ind = 0;
//vector<lli>lis[MX+5];
map<int,int>indi;


void sieve(){
    flag[0] = 1;
    flag[1] = 1;
    for(int i=4;i<=MX;i+=2){
        flag[i] = true;
        //lis[i].push_back(2);

    }
    //lis[2].pb(2);
    prime[0] = 2;
    ind = 1;
    indi[2] = ind;
    for(int i=3;i<=MX;i+=2){
        if(!flag[i]){
            prime[ind] = i;
            ind++;
            indi[i] = ind;
            //lis[i].push_back(i);
            for(int j=i+i;j<=MX;j+=i){
               flag[j] = true;
               //lis[j].push_back(i);
            }
        }
    }
   // cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;
    //cout<<prime[2]<<endl;
}
*/
/********************DONE***************/


int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int tmp = m - n;
    int ans = 1;
    int a = 1;
    int b = 1;
    int d1 = k - 1;
    int d2 = n - k;
    //cout<<d1<<" "<<d2<<endl;
    if(n>1) {

        int mn = MIN(d1,d2);
        int mx = MAX(d1,d2);
        //cout<<tmp<<endl;
        if(mn>0){
            int x1 = ABS ( ( ( (-1) - sqrt(1*1 - 4*2*(-tmp) ) ) ) );
            x1 = x1 / 4;
            //cout<<" x1 : "<<x1<<endl;
            if(x1 > mn){
                //cout<<mn<<endl;
                int tt = (mn+1 )*(2 + (mn)*2 );
                tt = tt / 2;
                if(mn==0) {
                    ans = ans + 1;
                    tt = 1;
                }
                //cout<<tt<<endl;
                tmp = tmp - tt;
                //cout<<tmp<<endl;
                ans = ans + mn;
                int tt1 = mn * 2 + 1;
                //cout<<tt1<<endl;
                //cout<<sqrt( (tt1)*(tt1) - 4*( -tmp ) )  - tt1<<endl;
                x1 =  ABS ( ( ( (-(tt1) ) - sqrt( (tt1)*(tt1) - 4*( -tmp ) ) ) ) ) / 2;
                //x2 = ABS ( ( ( (-(tt1) ) - sqrt( (tt1)*(tt1) - 4*( -tmp ) ) ) ) ) / 2;
                //cout<<x1<<endl;

                mn = n - (tt1);
                //cout<<"x1 : "<<x1<<endl;
                if(x1 > mn){
                    //cout<<mn<<endl;
                    ans = ans + mn;
                    tt = mn*( 2*(tt1+1) + (mn - 1)*1 );
                    tt = tt / 2;
                    //cout<<tt<<endl;
                    tmp = tmp - tt;
                    //cout<<tmp<<endl;
                    ans = ans + tmp / n;

                }
                else {
                    ans = ans + x1;
                }
            }
            else {
                ans = ans + x1;
            }
        }
        else {
            tmp = m;
            int x1 = ABS ( ( ( (-(1) ) - sqrt( (1)*(1) - 4*( -tmp ) ) ) ) ) / 2;
            if(x1 > n){
                ans = n;
                //cout<<ans<<endl;
                int tt = (n * (n + 1))/2;
                tmp = tmp - tt;
                //cout<<tmp<<endl;
                int tp = ans / n;

                ans = ans + tp;
            }
            else
                ans = x1;
        }
    }
    else
    ans = m;
        cout<<ans<<endl;

}

