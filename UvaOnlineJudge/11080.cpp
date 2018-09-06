#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

vector<int>g[250];
int flag[250];
int clr[250];

int dfs(int u){
    flag[u] = 1;
    int ret = 1;
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        if(clr[u]==clr[v]) return -1;
        clr[v] = -clr[u];
        if(!flag[v]){
            ret = dfs(v);
        }
        if(ret == -1) return -1;
    }

    return 1;
}

void init(){
    for(int i=0;i<=200;i++){
        flag[i]= 0;
        clr[i] = 0;
        g[i].clear();
    }
}

int ans(int n){
    int cnt = 0;
    int ret;
    for(int i=0;i<n;i++){
        if(!flag[i]){
            clr[i] = 1;
            ret = dfs(i);
            if(ret==1) cnt++;
            else return -1;
        }
    }
    return cnt;
}

int bfs(int u){
    queue<int>q;
    q.push(u);
    clr[u] = 1;
    int neg = 0;
    int tot = 0;
    while(!q.empty()){
        int s = q.front();
        q.pop();
        flag[s] = 1;
        tot++;
        if(clr[s]==-1) neg++;
        for(int i=0;i<g[s].size();i++){
            int v =g[s][i];
            if(clr[v]==clr[s]) return -1;

            if(!flag[v]&&clr[v]==0){
                clr[v] = -clr[s];
                q.push(v);
            }
        }
    }
    if(tot == 1) return 1;
    return min(neg,tot-neg);
}

int res(int n){
    int cnt = 0;
    int ret;
    for(int i=0;i<n;i++){
        if(!flag[i]){
            clr[i] = 1;
            ret = bfs(i);
            if(ret!=-1) cnt = cnt + ret;
            else return -1;
        }
    }
    return cnt;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    int n,m;
    int u,v;
    cin>>t;
    while(t--){
        cin>>n>>m;
        init();
        for(int i=0;i<m;i++){
            cin>>u>>v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        cout<<res(n)<<endl;
    }
}
