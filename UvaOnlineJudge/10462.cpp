#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

struct edge{
    int u;
    int v;
    int dis;
    edge(){
    }
    bool operator <  (edge e) const{
           return e.dis > dis;
    }
};

vector<edge>fin;
int p[250];

int init(int n){
    for(int i=0;i<=n;i++){
        p[i] = i;
    }
}

int findP(int u){
    if(p[u]==u) return u;
    p[u] = findP(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[findP(v)]  = findP(u);
}

bool isP(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(pu==pv) return true;
    return false;
}

bool check(int n){
    int pu = findP(1);
    for(int i=2;i<=n;i++){
        int pv = findP(i);
        if(pu!=pv) return false;
    }
    return true;
}

int mstF(int n){
    sort(fin.begin(),fin.end());
    int siz = fin.size();
    int tot = 0;
    int flag = 0;
    int ind = 0;
    int tt = 0;
    for(int i=0;i<siz;i++){
        cout<<fin[i].u<<" "<<fin[i].v<<" "<<isP(fin[i].u,fin[i].v)<<" "<<fin[i].dis<<endl;
        if(isP(fin[i].u,fin[i].v)==false){
            Union(fin[i].u,fin[i].v);
            tt = tt + fin[i].dis;
        }
        else if(flag==0&&fin[i].u!=fin[i].v){
            flag = 1;
            ind = i;
        }

    }
    if(check(n)==false) return -1;
    if(flag==0) return -2;
    init(n);
    Union(fin[ind].u,fin[ind].v);
    tot = tot + fin[ind].dis;
    //cout<<ind<<" "<<tot<<" "<<tt<<endl;
    for(int i=0;i<siz;i++){
        if(isP(fin[i].u,fin[i].v)==false){
            Union(fin[i].u,fin[i].v);
            tot = tot + fin[i].dis;
        }
    }
    return tot;
}


void print(){
    sort(fin.begin(),fin.end());
    int siz = fin.size();
    for(int i=0;i<siz;i++){
        cout<<fin[i].u<<" "<<fin[i].v<<" "<<isP(fin[i].u,fin[i].v)<<" "<<fin[i].dis<<endl;
    }
}
int main(){
    //freopen("out.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;
    int n,m;
    int u,v,d;
    edge e;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>m;
        init(n);
        fin.clear();
        for(int i=0;i<m;i++){
            cin>>u>>v>>d;
            e.u = u;
            e.v = v;
            e.dis = d;
            if(u!=v)
            fin.push_back(e);
        }
        cout<<"Case #"<<cas<<" : ";
        int ans = mstF(n);
        if(ans == -2){
            cout<<"No second way"<<endl;
        }
        else if(ans == -1){
            cout<<"No way"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        //print();
    }
}
