#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int flag[1005];
vector<int> g[1005];
queue<int> q;

void bfs(int src){

    q.push(src);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i=0;i<g[u].size();i++){
                int v = g[u][i];
                if((!flag[v]&&v!=0)||(v!=0&&flag[v]>flag[u]+1)){
                    flag[v] = flag[u] + 1;
                    q.push(v);
                }
        }
    }
}

int main(){
    int t;
    int p,d;
    int a,b;
    cin>>t;
    while(t--){
        cin>>p>>d;
        for(int i=0;i<d;i++){
           cin>>a>>b;
           g[a].push_back(b);
           g[b].push_back(a);
        }
        bfs(0);
        for(int i=1;i<p;i++){
            cout<<flag[i]<<endl;
            flag[i] = 0;
            g[i].clear();
        }
        flag[0] = 0;
        g[0].clear();
        if(t!=0) printf("\n");
    }
}
