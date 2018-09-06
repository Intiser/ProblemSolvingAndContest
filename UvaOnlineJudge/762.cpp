#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>

using namespace std;

int flag[3010];
map<string,int> fl;
vector<string> sets;
queue<int> q;
vector<int> g[3010];
int day;
int maxm;
int got;

int bfs(int src,int des){
    q.push(src);
    flag[src]++;
    int elem = 1;
    int next = 0;
    int step = 1;
    got = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        elem--;
        //if(u = des) got = 1;
        for(int i=0;i<g[u].size();i++){
            int v= g[u][i];
            if(!flag[v]){
                flag[v]++;
                q.push(v);
                next++;
            }
            if(v == des)
                return step;

        }
        if(elem==0){
            elem = next;
            next = 0;
            if(maxm<elem){
                maxm = elem;
                day  =  step;
            }
            step++;
        }

    }
     return 0;
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    int m,n,p,mul;
    int a,b;
    string s,r;
    cin>>t;
    //printf("SHIPPING ROUTES OUTPUT\n\n");
    for(int cas=1;cas<=t;cas++){
        cin>>m>>n>>p;
        for(int i=0;i<m;i++){
            cin>>s;
            sets.push_back(s);
            fl[s]= i;
        }
        for(int i=0;i<n;i++){
            cin>>s>>r;
            a = fl[s];
            b = fl[r];
            g[a].push_back(b);
            g[b].push_back(a);
        }
        //printf("DATA SET  %d\n\n",cas);
        for(int i=0;i<p;i++){
            cin>>mul>>s>>r;
            a = fl[s];
            b = fl[r];
            int res = bfs(a,b);
            if(res>0){
                //cout<<"$"<<mul*res*100<<endl;
                cout<<res<<endl;
                while(!q.empty()) q.pop();
            }
            else{
                cout<<"NO SHIPMENT POSSIBLE"<<endl;
            }
            for(int j=0;j<n;j++){
                flag[j] = 0;
            }
        }
        //printf("\n");
        for(int i=0;i<m;i++){
            s= sets[i];
            fl[s]= 0;
            flag[i] = 0;
            g[i].clear();
        }
        sets.clear();
        if(cas == t) printf("END OF OUTPUT\n");
    }
}

