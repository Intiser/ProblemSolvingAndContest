#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int n,m;
vector<int>g[105];
int flag[105];
map<string,int> mp;

string genIndex(int u,int v){
    string s,t;
    t = "";
    while(u/10){
        t.push_back('0'+u%10);
        u = u/10;
    }
    t.push_back('0'+u%10);
    reverse(t.begin(),t.end());
    s = s + t;
    t = "";
    while(v/10){
        t.push_back('0'+v%10);
        v = v/10;
    }
    t.push_back('0'+v%10);
    reverse(t.begin(),t.end());
    s = s + t;
    //cout<<u<<" "<<v<<" "<<s<<" "<<mp[s]<<endl;
    return s;
}

void plot(int u,int v){
     string s = genIndex(u,v);
     mp[s] = 1;
     //cout<<s<<" p "<<mp[s]<<endl;
     s = genIndex(v,u);
     mp[s] = 1;
     //cout<<s<<" p "<<mp[s]<<endl;

}

void eras(int u,int v){
    string s = genIndex(u,v);
     mp[s] = 0;
     s = genIndex(v,u);
     mp[s] = 0;
}

int contain(int u,int v){
    string s = genIndex(u,v);
    //cout<<s<<" contain "<<endl;
    if(mp[s]==1) return 1;
    s =  genIndex(v,u);
    //cout<<s<<" contain "<<endl;
    if(mp[s]==1) return 1;
    plot(u,v);
    return 0;
}

int check(int u){
    int ret = 0;
    int mx  = 0;
    int rt ;
    //cout<<"u = "<<u<<endl;
    for(int i=0;i<g[u].size();i++){
        int v = g[u][i];
        //cout<<"v = "<<v<<"  "<<contain(u,v)<<" ";
        if(contain(u,v)==0){
            rt = check(v) + 1;
            eras(u,v);
            if(rt>mx) mx = rt;
        }
    }
    //cout<<endl;
    ret = mx;
    return ret;
}

int result(){
    int mx = 0,rt =0;
    mp.clear();
    for(int i=0;i<n;i++){
        rt = check(i);
        if(rt>mx) mx = rt;
    }
    return mx;
}


void clr(){
    for(int i=0;i<100;i++){
        flag[i] = 0;
        g[i].clear();
    }
    mp.clear();
}

int main(){
    int a,b;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        cout<<result()<<endl;
        clr();
    }
}
