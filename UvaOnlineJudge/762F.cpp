#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>

using namespace std;

map<string,int>indexed;
int ind;
bool flag;

struct node{
    int index;
    string s;
};

struct road{
    string a;
    string b;
};

node crt(int n,string s){
    node no;
    no.index = n;
    no.s = s;
    return no;
}

queue<node> q;
vector<node> g[3050];
map<string,string> path;
vector<road> allpath;
int used[3050];

void indexing(string s){
    if(indexed[s]>0){
        return ;
    }
    indexed[s] = ind;
    ind++;
}

void bfs(string src,string tgt){
    flag = false;
    node no;
    no.index = indexed[src];
    no.s  = src ;
    used[no.index] = 1;
    q.push(no);
    while(used[indexed[tgt]]==0&&!q.empty()){
        no = q.front();
        q.pop();
        //cout<<no.s<<" "<<g[no.index].size()<<" "<<q.empty()<<endl;
        if(no.s==tgt) {
            flag = true;
            return ;
        }
        int u = no.index;
        used[u] = 1;
        for(int i=0;i<g[u].size();i++){
            node nw = g[u][i];
            if(!used[nw.index]){
                q.push(nw);

                path[nw.s] = no.s;
            }
        }
        //cout<<q.size()<<endl;
    }
    //if(used[indexed[tgt]]==1) flag = true;
}

void makepath(string a,string b){
    road r;
    r.b = b;
    while(path[r.b]!=a){
        r.a = path[r.b];
        allpath.push_back(r);
        r.b = r.a;
    }
    r.a = path[r.b];
    allpath.push_back(r);
    reverse(allpath.begin(),allpath.end());
}

void print(){
    for(int i=0;i<allpath.size();i++){
        cout<<allpath[i].a<<" "<<allpath[i].b<<endl;
    }
}


void clr(){
    indexed.clear();
    ind = 1;
    while(!q.empty()) q.pop();
    path.clear();
    allpath.clear();
    for(int i=0;i<=3000;i++){
        used[i] = 0;
        g[i].clear();
    }
}

int main(){
    int n,st = 0;
    string a,b;
    node no;
    while(cin>>n){
            if(st==1) printf("\n");
            st = 1;
            clr();
        for(int i=0;i<n;i++){
            cin>>a>>b;
            indexing(a);
            indexing(b);
            no = crt(indexed[a],a);
            g[indexed[b]].push_back(no);
            no = crt(indexed[b],b);
            g[indexed[a]].push_back(no);
        }
        cin>>a>>b;
        bfs(a,b);

        if(flag==true){
            makepath(a,b);
            print();
        }
        else{
            printf("No route\n");
        }
    }
}
