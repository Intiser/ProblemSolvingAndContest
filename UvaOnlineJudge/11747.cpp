#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<algorithm>

using namespace std;

struct node{
    int u;
    int v;
    int w;

    bool operator < ( node n) const{
        return n.w > w;
    }
};

vector<node>edges;
int p[1050];
vector<int>lens;

int Find(int u){
    if(p[u]==u) return u;
    p[u] = Find(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[Find(v)] = Find(u);
}

bool check(int u,int v){
    if(Find(u)==Find(v)) return true;
    return false;
}

void mst(int n){
    sort(edges.begin(),edges.end());
    for(int i=0;i<=n;i++) p[i] = i;
    int siz = edges.size();
    for(int i=0;i<siz;i++){
         int u = edges[i].u;
         int v = edges[i].v;
         if(check(u,v)==false){
            Union(u,v);
         }
         else{
            lens.push_back(edges[i].w);
         }
    }
}

void clr(){
    lens.clear();
    edges.clear();
}

void print(){
    sort(lens.begin(),lens.end());
    if(lens.size()==0) cout<<"forest";

    for(int i=0;i<lens.size();i++){
        if(i==0){
            cout<<lens[i];
        }
        else{
            cout<<" "<<lens[i];
        }
    }
    cout<<endl;
}

int main(){
    int n,m;
    int a,b,c;
    node nod;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<m;i++){
            cin>>a>>b>>c;
            nod.u = a;
            nod.v = b;
            nod.w = c;
            edges.push_back(nod);
        }
        mst(n);
        print();
        clr();
    }
}
