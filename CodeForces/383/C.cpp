#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
#include<queue>

using namespace std;

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

vector<int>g[150];
int flag[150];

int bfs(int src){
    queue<int>q;
    q.push(src);
    int st = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        st++;
        if(flag[u]>0) return (st - flag[u]);
        flag[u] = st;
        for(int i=0;i<g[u].size();i++){
            if(u!=g[u][i])
            q.push(g[u][i]);
        }
    }
    return -1;
}

int checkall(int n){
    int mn = n*n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++) flag[j] = 0;
        int ret = bfs(i);
        //cout<<ret<<endl;
        if(ret!=-1){
            if(ret%2==0) ret = ret/2;;
            mn = min(ret,mn);
        }
    }
    if(mn==n*n) return - 1;
    return mn;
}

int main(){
    lli val = 8;
    lli n;
    int a;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        g[i].push_back(a);
    }
    int status = checkall(n);
    cout<<status<<endl;
}

