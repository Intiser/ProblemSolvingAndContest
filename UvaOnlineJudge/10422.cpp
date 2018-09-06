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
#define FOR(i,x,y) for(vlong i = (x) ; i <= (y) ; ++i)
#define ROF(i,x,y) for(vlong i = (y) ; i >= (x) ; --i)
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

//int knightDir[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1} };
//int dir4[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};

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
#define lli long long int

//int dx[] = {-1,1,0,0};
//int dy[] = {0,0,-1,1};

/***********Template Ends Here***********/

int d[8][2] = { {-2,1},{-1,2},{1,2},{2,1},{2,-1},{-1,-2},{1,-2},{-2,-1} };

string target[] = {"11111","01111","00 11","00001","00000"};

struct node{
    string s[5];
    string identifier;
    int r;
    int c;
    int step;
};

map<string,int>flag;

bool valid(int r,int c){
    if(r<0||c<0) return false;
    if(r>=5||c>=5) return false;
    return true;
}

void print(string s[],int n){
    cout<<n<<" :  ######"<<endl;
    for(int i=0;i<5;i++){
        cout<<s[i]<<endl;
    }
}

string newN(int r1,int c1,int r2,int c2,string s[],int in){
    string str;
        int i = in;
            for(int j=0;j<5;j++){
                if(i==r1&&j==c1){
                    str.push_back(s[r2][c2]);
                }
                else if(i==r2&&j==c2){
                    str.push_back(s[r1][c1]);
                }
                else
                    str.push_back(s[i][j]);
            }

        return str;
}

string pluse(string s[]){
    return s[0] + s[1] + s[2] + s[3] + s[4];
}

int bfs(string s[]){
    queue<node>q;
    node no;

    for(int i=0;i<5;i++) no.s[i] = s[i];
    int r,c,f=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++) if(s[i][j]!='1'&&s[i][j]!='0') { r = i; c = j; f = 1; break; }
        if(f==1) break;
    }
    no.r = r;
    no.c = c;
    //cout<<r<<" "<<c<<" "<<f<<endl;
    no.step = 0;
    no.identifier = pluse(s);
    flag.clear();
    q.push(no);
    node ne;
    while(!q.empty()){
        no = q.front();
        q.pop();
        //print(no.s,no.step);
        //cout<<no.r<<" "<<no.c<<endl;
        flag[no.identifier] = 1;
        if(no.step >= 11) return -1;
        int done = 1;
        for(int i=0;i<5;i++) if(target[i] != no.s[i]) done = 0;
        //cout<<done<<endl;
        if(done == 1) return no.step;

        for(int i=0;i<8;i++){
            int x = no.r + d[i][0];
            int y = no.c + d[i][1];
            if(valid(x,y)==true){
                   //cout<<" jay "<<endl;
                   //cout<<no.step<<" "<<x<<" "<<y<<endl;
                    /*string stt[5];
                    for(int i=0;i<5;i++) stt[i] = no.s[i];*/
                    for(int i=0;i<5;i++)
                        ne.s[i] = newN(x,y,no.r,no.c,no.s,i);
                    ne.identifier = pluse(ne.s);
                    ne.r = x;
                    ne.c = y;
                    ne.step = no.step + 1;
                    if(!flag[ne.identifier]){
                        q.push(ne);
                    }
            }
        }
    }
    return -1;

}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    string s[5];
    cin>>t;
    cin.ignore();
    for(int cas=0;cas<t;cas++){
        for(int i=0;i<5;i++){
            getline(cin,s[i]);
        }
        int ans = bfs(s);
        if(ans == -1){
            cout<<"Unsolvable in less than 11 move(s)."<<endl;
        }
        else {
            cout<<"Solvable in "<<ans<<" move(s)."<<endl;
        }
    }
}

