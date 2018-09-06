#include<iostream>
#include<stdio.h>

using namespace std;

int p[100000];
int f[100000];

int Find(int u){
    if(p[u]==u) return u;
    p[u] = Find(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[Find(v)] = Find(u);
}

void init(int n){
    for(int i=1;i<=n;i++) {
        p[i] = i;
        f[i] = 0;
    }
}

int counting(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++) {
        int v = Find(i);
        f[v]++;
        if(f[v]==1) cnt++;
    }
    return cnt;
}

int main(){
    int n,m;
    int x,y;
    int cas = 1;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        init(n);
        for(int i=0;i<m;i++) {
            cin>>x>>y;
            Union(x,y);
        }
        int ans = counting(n);
        cout<<"Case "<<cas<<": "<<ans<<endl;
        cas++;
    }
}
