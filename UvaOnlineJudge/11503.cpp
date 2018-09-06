#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

#define Mx 200000

int p[201000];
int f[201000];
int ind;
map<string,int>index;

void init(int n){
    for(int i=0;i<=n;i++){
        p[i] = i;
        f[i] = 1;
    }
}

int check(string s){
    if(index[s]>0) return index[s];
    index[s] = ind;
    ind++;
    return index[s];
}

int Find(int u){
    if(p[u]==u) return u;
    p[u] = Find(p[u]);
    return p[u];
}

int Union(int u,int v){
    int a = Find(v);
    int b = Find(u);
    p[a] = p[b];
    if(a!=b){
        f[b] = f[b] + f[a];
    }
    return f[b];
}

int main(){
    init(Mx);
    int t;
    int n;
    string st,tt;
    cin>>t;
    while(t--){
        cin>>n;
        ind = 1;
        index.clear();
        for(int i=1;i<=n;i++){
            cin>>st>>tt;
            int a = check(st);
            int b = check(tt);
            int ans = Union(a,b);
            cout<<ans<<endl;
        }
        init(ind);
    }
}
