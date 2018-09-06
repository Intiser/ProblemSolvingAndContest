#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

#define lli long long int

struct node{
    int u;
    int v;
    lli dis;
    node(int a,int b,int c){
        u = a;
        v = b;
        dis = c;
    }
    node(){
    }
    bool operator < (node n) const {
        return n.dis > dis;
    }
};

vector<node>lists;

int flag[201000];
int p[201000];

int findP(int u){
    if(p[u]==u) return u;
    p[u] = findP(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[findP(v)] = p[findP(u)];
}

bool check(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(pu==pv) return true;
    return false;
}

lli mst(){
    sort(lists.begin(),lists.end());
    int siz = lists.size();
    lli tot = 0;
    for(int i=0;i<siz;i++){
        if(check(lists[i].u,lists[i].v) == false){
           Union(lists[i].u,lists[i].v);
           tot = tot + lists[i].dis;
        }
    }
    return tot;
}

void init(int n){
    for(int i=0;i<=n;i++) p[i] = i;
}

int main(){
    int n;
    int m;
    int a,b,c;
    node no;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        lists.clear();
        lli tot = 0;
        for(int i=0;i<m;i++){
            cin>>a>>b>>c;
            no.u = a;
            no.v = b;
            no.dis = c;
            lists.push_back(no);
            tot = tot + c;
        }
        init(n);
        tot = tot - mst();
        cout<<tot<<endl;
    }
}
