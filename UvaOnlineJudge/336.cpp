#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<map>

using namespace std;

queue<int>q;
map<string,int> fl;
vector<string> now;
vector<int> G[100];
map<string,int> nmbr;
int flag[100];

void bfs(int src,int tot){
   q.push(src);
    flag[src]++;
    int elem = 1;
    int next = 0;
    int step = 0;
    while(!q.empty()){
        if(tot == step){
            while(!q.empty())
                q.pop();
            return;
        }
        int u = q.front();
        q.pop();
        elem--;
        for(int i=0;i<G[u].size();i++){
            int v= G[u][i];
            if(!flag[v]){
                flag[v]++;
                q.push(v);
                next++;
            }
        }
        if(elem==0){
            elem = next;
            next = 0;
            step++;
        }
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,cas=1;
    string a,b;
    int d,c,u;
    while(cin>>n){
        if(n==0) break;
        now.clear();
        for(int i=0;i<n;i++){
            cin>>a>>b;
            if(!fl[a]){
                now.push_back(a);
                fl[a]++;
                u = now.size();
                nmbr[a] = u;

            }
             if(!fl[b]){
                now.push_back(b);
                fl[b]++;
                u = now.size();
                nmbr[b] = u;

            }
            c = nmbr[a];
            d = nmbr[b];
            G[c].push_back(d);
            G[d].push_back(c);
        }
        int lim = now.size();
        while(cin>>a>>d){
            if(a=="0"&&d==0) break;

            c = nmbr[a];
            bfs(c,d);
            int cnt=0;
            for(int i=1;i<=lim;i++){
                if(!flag[i]) cnt++;

                flag[i] = 0;
            }
            //cout<<cnt<<endl;
            cout<<"Case "<<cas<<": "<<cnt<<" nodes not reachable from node "<<a<<" with TTL = "<<d<<"."<<endl;
            cas++;
        }
        for(int i =0;i<=100;i++){
            flag[i]=0;
            G[i].clear();

        }
        for(int i=0;i<=now.size();i++){
            fl[now[i]]=0;
            nmbr[now[i]]=0;
        }
        now.clear();

    }
}
