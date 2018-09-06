#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

struct node{
    string s;
    int val;
    node(){
    }
    bool operator > (node n) const {
        return n.val > val;
    }
};

map<string,int>ind;
map<int,string>indU;
vector<int>g[200];
vector<string>lists;
int vis[200];
int arr[200];

int dfs(int u,int val){
    if(vis[u]==1) return val;
    vis[u] = 1;
    int mx =val;
    if(arr[u]<val)arr[u] = val;
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        int ret = dfs(v,val+1);
        if(mx<ret) mx = ret;
    }
    return mx;
}

void ccr(int n){
    for(int i=0;i<=n;i++) vis[i] = 0;
}

int ret(int n){
    int mx = 0;
    for(int i=n;i>0;i--){
        int ret = dfs(i,0);
        ccr(n);
        if(mx<ret){
            mx = ret;
        }
    }
    return mx;
}

void res(int n,int mx){
    for(int i=0;i<=mx;i++){
        for(int j=n;j>0;j--){
            if(arr[j]==i)
            lists.push_back(indU[j]);
        }
    }
}

void clr(int n){
    for(int i=0;i<=n;i++){
        g[i].clear();
        vis[i] = 0;
        arr[i] = 0;
    }
    ind.clear();
    indU.clear();
    lists.clear();
}

void print(int n){
    int siz = lists.size();
    for(int i=0;i<siz;i++){
        if(i==0){
            cout<<lists[i];
        }
        else{
            cout<<" "<<lists[i];
        }
    }
    cout<<endl;
    // emni
    //for(int i=0;i<=n;i++){
    //    cout<<arr[i]<<endl;
    //}

}

int main(){
    int n,e;
    int a,b;
    int cas = 1;
    string tmp,to;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(cin>>n){
        for(int i=1;i<=n;i++){
            cin>>tmp;
            ind[tmp] = i;
            indU[i] = tmp;
        }
        cin>>e;
        for(int i=0;i<e;i++){
            cin>>to>>tmp;
            g[ind[to]].push_back(ind[tmp]);
        }
        int mx = ret(n);
        //cout<<mx<<endl;
        res(n,mx);
        cout<<"Case #"<<cas<<": Dilbert should drink beverages in this order: ";
        print(n);
        cout<<"."<<endl;
        clr(n);
    }
}
