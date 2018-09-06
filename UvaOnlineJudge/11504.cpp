#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int flag[100500];
int freq[100500];
vector<int>g[100500];

void dfs(int n,int clr){
    if(flag[n]==clr) return;
    flag[n] = clr;
    for(int i=0;i<g[n].size();i++){
        dfs(g[n][i],clr);
    }
}

void goAround(int n){
    int clr = 1;
    for(int i=1;i<=n;i++){
        if(!flag[i]){
            dfs(i,clr);
            clr++;
        }
    }
}

int result(int n){
    for(int i=1;i<=n;i++) freq[flag[i]]++;
    int cnt = 0;
    for(int i=1;i<=n;i++){
        if(freq[i]) cnt++;
    }
    return cnt;
}

void clr(int n){
    for(int i=1;i<=n;i++){
        g[i].clear();
        flag[i] = 0;
        freq[i] = 0;
    }
}

int main(){
    int t;
    int n,m;
    int x,y;
    int ans;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>x>>y;
            g[x].push_back(y);
        }
        goAround(n);
        ans = result(n);
        cout<<ans<<endl;
        clr(n);
    }
}
