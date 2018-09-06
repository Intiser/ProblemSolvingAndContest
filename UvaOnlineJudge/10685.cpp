#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

map<string,int>index;
int p[10000];
int f[10000];
int ind ;

int Find(int u){
    if(p[u]==u) return u;
    p[u] = Find(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[Find(v)] = p[Find(u)];
}

void init(int n){
    for(int i=0;i<=n;i++) {
        p[i] = i;
        f[i] = 0;
    }
}

int res(int n){
    int maxm = 0;
    for(int i=1;i<=n;i++){
        int num = Find(i);
        f[num]++;
        if(maxm<f[num]) maxm = f[num];

    }

    return maxm;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    string str,tt;
    while(cin>>n>>m){
            if(n==0&&m==0) break;
        init(n);
        index.clear();
        for(int i=1;i<=n;i++){
            cin>>str;
            index[str] = i;
        }
        for(int i=0;i<m;i++){
            cin>>str>>tt;
            int a = index[str];
            int b = index[tt];
           // cout<<a<<" "<<b<<endl;
            Union(a,b);
        }
        int ans = res(n);
        cout<<ans<<endl;
    }
}
