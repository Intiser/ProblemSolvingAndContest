#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

struct node{
    int x;
    int y;
    int dis;
    bool operator < (node n) const {
        return n.dis > dis;
    }
    node(int X,int Y,int D){
        x = X;
        y = Y;
        dis = D;
    }
};

vector<node> lists;
int p[100100];
int fr[100100];

int findP(int u){
    if(p[u]==u) return u;
    p[u] = findP(p[u]);
    //return p[u];
    return p[u];
}

void Union(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    p[pu] = pv;

}

bool check(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(pu==pv) return true;
    return false;
}

int mst(int n,int ar){
    for(int i=1;i<=n;i++){
        p[i] = i;
        fr[i] = 0;
    }
    int tot = 0;
    sort(lists.begin(),lists.end());
    for(int i=0;i<lists.size();i++){
        if(check(lists[i].x,lists[i].y)==false&&lists[i].dis<ar){
            Union(lists[i].x,lists[i].y);
            tot = tot + lists[i].dis;
        }
    }
    return tot;
}

int airports(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        int val = findP(i);
        if(fr[val]==0){
            cnt++;
        }
        fr[val]++;
    }
    return cnt;
}



int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    int n,m,a;
    int x,y,d;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>m>>a;
        lists.clear();
        for(int i=0;i<m;i++){
             cin>>x>>y>>d;
             node no = node(x,y,d);
             lists.push_back(no);
        }
        int val = mst(n,a);
        int pr  = airports(n);
        int ar  = pr*a;
        printf("Case #%d: %d %d\n",cas,ar+val,pr);
    }
}
