#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>

using namespace std;

vector<string>names;
//pair<string,int>drinks[150];
map<string,int> vis;
map<string,int> num;
stack<string> st;
vector<string> adj[150];

void dfs(string u,int val){
    if(vis[u]==1) return;
    vis[u]=1;
    int a = num[u];
    //cout<<u<< " : "<<endl;
    //cout<<" a "<<a<<adj[a].size()<<endl;
    for(int i=0;i<adj[a].size();i++){
        string v = adj[a][i];
        //cout<<" v "<<v<<endl;
        if(vis[v]!=1){
            dfs(v,val+1);
        }
        //cout<<" "<<i<<endl;
    }
    st.push(u);
    //cout<<u<<" "<<val<<endl;
}

void clr(){
    for(int i=0;i<names.size();i++){
        vis[names[i]] = 0;
        num[names[i]] = 0;
        adj[i+1].clear();
    }
    while(!st.empty()) st.pop();
    names.clear();
}

void funct(){
    //sort(names.begin(),names.end());
    int l = names.size();
    int t;
    /*for(int i=0;i<l;i++){
       t = num[names[i]];
       sort(adj[t].begin(),adj[t].end());
    }*/
    for(int i=names.size()-1;i>=0;i--){
        if(vis[names[i]]!=1){
            dfs(names[i],0);

        }
         //cout<<i<<endl;
    }
}

void check(){
    int a=0;
    /*for(int i=0;i<names.size();i++){
        cout<<" ok "<<endl;
        a  = num[names[i]];
        cout<<"  #  "<<a<<" "<<adj[a].size()<<endl;
        for(int j=0;adj[a].size();j++){
            cout<<adj[a][j]<<endl;
        }
    }*/
    for(int i = 0 ;i<names.size();i++){
        //cout<<names[i]<<endl;
        a  = num[names[i]];
        //cout<<"  #  "<<a<<" "<<adj[a].size()<<endl;
        cout<<names[i]<<" ";
        for(int j=adj[a].size();j>=0;j--){
            cout<<adj[a][j];
        }
        cout<<"."<<endl;
    }
}

bool cmp(string lhs,string rhs){
    return num[lhs] > num[rhs];
}

void sorting(int n){
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(),adj[i].end(),cmp);
    }
}

int main(){
    int n,e;
    int a,b;
    int cas = 1;
    string tmp,to;
    clr();
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(cin>>n){
       // if(cas>1) printf("\n");
        for(int i=0;i<n;i++){
            cin>>tmp;
            names.push_back(tmp);
            num[tmp] = i+1;
        }
        cin>>e;
        for(int i=0;i<e;i++){
            cin>>tmp>>to;
            a = num[tmp];
            //cout<<a<<endl;
            adj[a].push_back(to);
        }
        sorting(n);
        funct();
        //check();
        string ans;
        cout<<"Case #"<<cas<<": Dilbert should drink beverages in this order: ";
        while(!st.empty()){
            ans = st.top();
            st.pop();
            if(!st.empty())
            cout<<ans<<" ";
            else
                cout<<ans;
        }
        cout<<"."<<endl;
        clr();
        cas++;
        printf("\n");
    }
}
