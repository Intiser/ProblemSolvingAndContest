#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

#define lli long long int

struct node{
    string u;
    string v;
    lli dis;
    node(string a,string b,int c){
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

map<string,int>index;
vector<node>lists;
int p[1000];

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

void init(int n){
    for(int i=0;i<=n;i++) p[i] = i;
}

lli mst(){
    sort(lists.begin(),lists.end());
    int siz = lists.size();
    lli tot = 0;
    for(int i=0;i<siz;i++){
        int u = index[lists[i].u];
        int v = index[lists[i].v];
        if(check(u,v)==false){
            Union(u,v);
            tot = tot + lists[i].dis;
        }
    }
    return tot;
}

bool checkRes(int u,int n){
    int pu = findP(u);
    for(int i=1;i<=n;i++){
        int pv = findP(i);
        if(pv!=pu) return false;
    }
    return true;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    string a,b;
    int c;
    node no;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        lists.clear();
        init(n);
        index.clear();
        for(int i=1;i<=n;i++){
          cin>>a;
          index[a] = i;
        }
        for(int i=0;i<m;i++){
            cin>>a>>b>>c;
            no.u = a;
            no.v = b;
            no.dis = c;
            lists.push_back(no);
        }
        cin>>a;
        lli tot = 0;
        tot = mst();
        if(checkRes(index[a],n)==false){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<tot<<endl;
        }
    }
}
