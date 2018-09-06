#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

int flag[3010];
queue<int> q;
vector<int> g[3010];
int day;
int maxm;

void bfs(int src){
    q.push(src);
    flag[src]++;
    int elem = 1;
    int next = 0;
    int step = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        elem--;
        for(int i=0;i<g[u].size();i++){
            int v= g[u][i];
            if(!flag[v]){
                flag[v]++;
                q.push(v);
                next++;
            }
        }
        if(elem==0){
            elem = next;
            next = 0;
            if(maxm<elem){
                maxm = elem;
                day  =  step;
            }
            step++;
        }
    }
}

int main(){
    int e;
    int t;
    int n,a;
    while(cin>>e){
        for(int i=0;i<e;i++){
            cin>>n;
            while(n--){
                scanf("%d",&a);
                g[i].push_back(a);
            }
        }
        cin>>t;
        while(t--){
            cin>>a;
            maxm = 0;
            day = 0;
            bfs(a);
            if(maxm>0)
            cout<<maxm<<" "<<day<<endl;
            else
            cout<<'0'<<endl;
            for(int i = 0;i<e;i++) flag[i] = 0;

        }
        for(int i = 0;i<e;i++) g[i].clear();
    }
}

