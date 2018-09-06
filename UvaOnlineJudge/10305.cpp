#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

int vis[150];
vector<int> g[150];
stack<int> st;

void dfs(int u){
    vis[u]++;
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        if(!vis[v]){
            dfs(v);
        }
       // else
         //   return;
    }
    //cout<<" # "<<u<<endl;
    st.push(u);
}



void clr(){
    for(int i=0;i<150;i++){
        vis[i] = 0;
        g[i].clear();
    }
    while(!st.empty()) st.pop();
}

void all(int n){

    for(int i=1;i<=n;i++){
        if(!vis[i]) dfs(i);
    }
}

int main(){
    int n,m;
    int a,b;

    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<m;i++){
           cin>>a>>b;
           g[a].push_back(b);
        }
        all(n);
        int l = st.size();
        int f;
        for(int i=0;i<l;i++){
            f = st.top();
            if(i!=0) printf(" ");
            cout<<f;
            st.pop();
        }
        cout<<endl;
        clr();
    }
}
