
#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

#define lli long long int

lli minm(lli a,lli b){
    if(a>b) return b;
    return a;
}
vector<int>g[2*100010];
vector<int>wt[2*100010];
lli a[2*100010];
int nw[2*100010];
int flag[2*100010];

vector<int> dfs(int u,vector<int>nw){

    if(flag[u]==1) return nw;
    flag[u] = 1;
    int cnt = 0;
    int ret = 0;
    int tot = 0;

    //cout<<u<<" "<<g[u].size()<<endl;
    //frm.push_back(u);
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        if(a[v]>=wt[u][i]) cnt++;
        nw.push_back(dfs(v,nw)) ;
    }
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        nw.push_back(a[v] - wt[u][i])
    }

    //frm.pop_back();
    //cout<<u<<" "<<cnt<<endl;
    //nw[u] = cnt;
    //return cnt;
    return nw;
}

void all(int n){
    for(int i=1;i<=n;i++){
        if(flag[i]==0){
            vector<int>ds;
            //vector<int>frm;
            dfs(i,ds);
        }
    }
}

int main(){
        int n,m;
        int p,w;
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n-1;i++){
            cin>>p>>w;
            g[p].push_back(i+1);
            wt[p].push_back(w);
        }
        all(n);
        cout<<nw[1];
        for(int i=2;i<=n;i++) cout<<" "<<nw[i];
        cout<<endl;
}

