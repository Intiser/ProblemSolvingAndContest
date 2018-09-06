#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int flag[10005];
queue<int> q;
vector<int> g[10005];

void bfs(int src){
    flag[src]++;
    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++){
            int v = g[u][i];
            if(!flag[v]){
                q.push(v);
            }
            flag[v]++;
        }
    }
}

int main(){
    int t,a,b;
    int n,m,l;
    cin>>t;
    while(t--){
        cin>>n>>m>>l;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            g[a].push_back(b);
        }
        int cnt = 0;
        for(int i=0;i<l;i++){
            cin>>a;
            bfs(a);
        }
        for(int k=1;k<=n;k++){
                if(flag[k]) cnt++;
        }
            cout<<cnt<<endl;
        for(int i=0;i<=n;i++) {
            flag[i]=0;
            g[i].clear();
        }
    }
}
