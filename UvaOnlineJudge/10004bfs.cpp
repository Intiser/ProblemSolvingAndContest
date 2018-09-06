#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int flag[250];
queue<int>q;
vector<int>g[250];


int bfs(int src){
    flag[src] = 1;
    q.push(src);
    int p=-1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        p=-flag[u];
        for(int i=0;i<g[u].size();i++){
            int v = g[u][i];
            if(flag[u]==flag[v])
                return -1;
            else if(flag[v]==0){
               flag[v] = p;
                q.push(v);
            }

        }
    }
    return 1;
}

int main(){
    int t,n;
    int a,b;

    while(cin>>t){
        if(t==0) break;
        cin>>n;
        for(int k=0;k<n;k++){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
         int fla;
        for(int i=0;i<t;i++){

            if(flag[i]==0)
                fla=bfs(i);
            if(fla==-1) break;
        }
        if(fla==-1){
             printf("NOT BICOLORABLE.\n");

        }
        else{
           printf("BICOLORABLE.\n");
        }
        while(!q.empty())
            q.pop();
        for(int i = 0;i<210;i++){
            flag[i] = 0;
            g[i].clear();
        }
    }
}
