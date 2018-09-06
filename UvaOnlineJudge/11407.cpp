#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define sccc(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define FOR(x,y) for(int x = 0;x<y;x++)
#define FORR(x,y) for(int x = 1;x<=y;x++)
#define prc(c) printf("Case %d:\n",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)
#define lli long long int

int sq[10010];
int dp[10010];

void pre(){
    for(int i=1;i*i<=10000;i++){
        sq[i*i] = i*i;
    }
    int nw = 0;
    for(int i=1;i<=10000;i++){
        if(sq[i]){
            nw = sq[i];
            dp[i] = 1;
        }
        else{
            dp[i] = 1 +  dp[i-nw];
        }

    }
}

int vis[10010];
int arr[10010];

int rec(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 3;
    if(vis[n]==1) return arr[n];
    vis[n] = 1;
    int mn = 10001;
    int ret;
    for(int i=1;i*i<=n;i++){
        ret = rec(n-i*i);
        if(mn>ret) mn = ret;
    }
    arr[n] = mn + 1;
    return arr[n];
}

void prep(){
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 3;
    for(int i=4;i<=10000;i++) rec(i);
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    prep();
    int t;
    int n;
    sc(t);
    FORR(cas,t){
        sc(n);
        pr(arr[n]);
    }
}
