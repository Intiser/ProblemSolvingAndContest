#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

#define lli long long int

struct node{
    int x;
    int y;
    int d;
    node(int X,int Y,int D){
        x = X;
        y = Y;
        d = D;
    }
    bool operator < (node n)const {
        return n.d > d;
    }
};

vector<node> pnt;
int flag[1100000];
int pr[1100000];
int n;
int m;
int k;

int findP(int u){
    if(pr[u]==u) return u;
    pr[u] = findP(pr[u]);
    return pr[u];
}

void unionP(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    pr[pu] = pv;
}

bool check(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(pu==pv) return true;
    return false;
}

lli mst(){
    lli tot = 0;
    for(int i=1;i<=n;i++) pr[i] = i;
    sort(pnt.begin(),pnt.end());
    int siz = pnt.size();
    for(int i=0;i<siz;i++){
        if(check(pnt[i].x,pnt[i].y)==false){
            unionP(pnt[i].x,pnt[i].y);
            tot = tot + pnt[i].d;
            //cout<<pnt[i].x <<" "<<pnt[i].y <<" "<<pnt[i].d<<endl;
        }
    }
    return tot;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c;
    int st = 0;
    while(cin>>n){
        if(st) printf("\n");
        st = 1;
        lli tt = 0;
        pnt.clear();
        for(int i=1;i<n;i++){
            cin>>a>>b>>c;
            tt = tt + c;

        }
        cin>>k;
        for(int i=0;i<k;i++){
            cin>>a>>b>>c;
            pnt.push_back(node(a,b,c));
        }
        cin>>m;
        for(int i=0;i<m;i++){
            cin>>a>>b>>c;
            pnt.push_back(node(a,b,c));
        }
        cout<<tt<<endl;
        cout<<mst()<<endl;
    }
}
