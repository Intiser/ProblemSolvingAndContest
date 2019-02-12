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

int n;
int amnt;
int cnt;
int fr[50];

void rec(int x,int tot){
    if(x == n){
        fr[tot]++;
        if(tot >= amnt)
            cnt++;
        return;
    }
    for(int i=1;i<=6;i++){
        rec(x+1,tot+i);
    }

}

int arr[105][105];

lli f1[155];
lli f2[155];

void clr(){
    for(int i=0;i<=100;i++) f1[i] = f2[i];
    CLR(f2,0);
}

//#define ahsan0045

int main(){
    #ifdef ahsan0045
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
//    arr[1][0] = 1;
//    arr[1][1] = 1;
//    for(int i=2;i<=15;i++){
//        arr[i][0] = 1;
//        for(int j=1;j<i;j++){
//            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//        }
//        arr[i][i] = 1;
//    }
//    for(int i=1;i<=15;i++){
//        for(int j=0;j<=i;j++) cout<<arr[i][j]<<" ";
//        cout<<endl;
//    }

    int a,b,c;
    int cas = 1;
    int t;
    cnt = 0;
    while(cin>>n>>amnt){
        if(n == 0 && amnt == 0) break;
        cnt = 0;

        int lim = 6;
        f1[1] = 1;
        f1[2] = 1;
        f1[3] = 1;
        f1[4] = 1;
        f1[5] = 1;
        f1[6] = 1;
        for(int i=2;i<=n;i++){
            lim = i*6 - 6;
            //cout<<i-1<<" "<<lim<<endl;
            for(int j=i-1;j<=lim;j++){
                f2[j+1] += f1[j];
                f2[j+2] += f1[j];
                f2[j+3] += f1[j];
                f2[j+4] += f1[j];
                f2[j+5] += f1[j];
                f2[j+6] += f1[j];
                //cout<<f2[j+1]<<" "<<f1[j]<<endl;
            }
            for(int j=i;j<=lim+6;j++){
                f1[j] = f2[j];
            }
            CLR(f2,0);
        }
        //cout<<" #### "<<endl;
        //for(int i=n;i<=6*n;i++) cout<<i<<" "<<f1[i]<<" "<<f2[i]<<endl;
        lli num = 0;
        for(int i=amnt;i<=6*n;i++){
            num += f1[i];
        }
        int tmp = n;
        lli dnum = 1;
        while(tmp--)  dnum = dnum * 6;
        if(num >= dnum) cout<<1<<endl;
        else if(num == 0) cout<<0<<endl;
        else{
            lli g = gcd(num,dnum);
            cout<<(num/g)<<"/"<<dnum/g<<endl;
        }

    }

}




