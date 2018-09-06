#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

#define lli long long int
#define inf 20000*50000+10

struct node{
    lli pos;
    lli dis;
    bool operator < ( const node& p ) const
	{
		return dis > p.dis;
	}
};

priority_queue<node,vector<node> >q;
vector<node>g[20500];
lli dist[20500];


void djkastra(int src,int n){
    node ne;
    ne.pos  = src;
    ne.dis  =  0;
    q.push(ne);
    dist[src] = 0;
    for(int i=0;i<n;i++){
        if(i!=src){

            dist[i] = inf;
        }

    }
    while(!q.empty()){
        ne = q.top();
        int u = ne.pos;
        int di = ne.dis;
        q.pop();
        if(di==dist[u])
            for(int i=0;i<g[u].size();i++){
                node nod = g[u][i];
                int v = nod.pos ;
                lli d = nod.dis + dist[u];
                if(dist[v]>d){
                    dist[v] = d;
                    //cout<<u<<" "<<d<<" "<<v<<endl;
                    nod.dis = d;
                    q.push(nod);
                }
                //cout<<d<<endl;
            }

    }
}

void clr(int n){

    for(int i=0;i<n;i++) g[i].clear();
}

void print(int n){
    for(int i=0;i<g[n].size();i++) cout<<g[n][i].pos<<" "<<g[n][i].dis<<endl;
}

int main(){
    //cout<<inf<<endl;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,mo,s,t;
    int tst;
    int x,y,d;
    node nod;
    cin>>tst;
    for(int cas=1;cas<=tst;cas++){
        cin>>n>>mo>>s>>t;
        for(int i=0;i<mo;i++){
            cin>>x>>y>>d;
            nod.pos = y;
            nod.dis = d;
            g[x].push_back(nod);
            nod.pos = x;
            g[y].push_back(nod);
            //cout<<i<<" "<<mo<<endl;
        }
        /*int tmp;
        while(cin>>tmp){
            print(tmp);
        }*/
        djkastra(s,n);
        cout<<"Case #"<<cas<<": ";
        if(dist[t]==inf){
            cout<<"unreachable"<<endl;
        }
        else{
            cout<<dist[t]<<endl;
        }
        clr(n);
    }
}
