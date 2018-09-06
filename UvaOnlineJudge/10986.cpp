#include<iostream>
#include<stdio.h>
#include<map>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

#define lli long long int

struct node{
    lli x;
    lli dis;
     bool operator < ( const node& p ) const
	{
		return dis > p.dis;
	}
};


vector<node> g[20010];
map<lli,lli> minm;
int flag[20010];

lli djkastra(int src,int tgt){
    priority_queue<node,vector<node> > pq;
    node no;
    no.x = src;
    no.dis  = 0;
    pq.push(no);
    flag[no.x] = 1;
    minm[no.x] = no.dis;
    while(!pq.empty()){
        no = pq.top();
        pq.pop();
        while(!pq.empty()&&flag[no.x]==1){
            no = pq.top();
            pq.pop();
        }
        //pq.pop();
       // cout<<pq.size()<<endl;
        if(no.x==tgt) return minm[no.x];
        int u = no.x;
        for(int i=0;i<g[u].size();i++){
            node np = g[u][i];
            if(flag[np.x]==1){
                np.dis = no.dis + np.dis;
               if(minm[np.x]>np.dis){
                    minm[np.x] = np.dis;
               }
            }
            else{
                np.dis = np.dis + no.dis;
                pq.push(np);
                minm[np.x] = np.dis;
            }
            //cout<<np.x<<endl;
        }
       // cout<<pq.size()<<endl;
    }
    return -1;
}

void clr(int n){
    for(int i=0;i<n;i++){
        flag[i] = 0;
        g[i].clear();
    }

    minm.clear();
}


int main(){
    int t;
    int n,m,sr,tg;
    int a,b,d;
    lli ans;
    node no;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>m>>sr>>tg;
        for(int i=0;i<m;i++){
            cin>>a>>b>>d;
            no.x = b;
            no.dis = d;
            g[a].push_back(no);
            no.x = a;
            g[b].push_back(no);
        }
        //cout<<djkastra(sr,tg)<<endl;
        ans = djkastra(sr,tg);
        cout<<"Case #"<<cas<<": ";
        if(ans==-1){
            cout<<"unreachable"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
        clr(n);
    }
}
