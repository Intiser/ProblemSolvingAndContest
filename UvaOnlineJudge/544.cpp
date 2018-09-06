#include<iostream>
#include<stdio.h>
#include<queue>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

map<string,int> used;
map<string,int> ind;


struct node{
    string u;
    string v;
    int load;
    bool operator < ( const node& p ) const
	{
		return load < p.load;
	}
};

vector<node>g[250];
node now;
int index;

priority_queue<node ,vector<node> > pq;

int mst(string src,string tgt){
    int mx = 10005;
    node n,e;
    n.u = src;
    n.v = src;
    n.load = mx;
    pq.push(n);
    while(used[tgt]==0&&!pq.empty()){
        n = pq.top();
        string u = n.u;
        //cout<<u<<" "<<n.v<<endl;
        while(used[u]==1){
            pq.pop();
            n = pq.top();
            u = n.u;
        }
        pq.pop();
        used[u] = 1;
        if(u==tgt) return n.load;
        string v = n.v;
        int l = n.load;
        int inu = ind[u];
        for(int i=0;i<g[inu].size();i++){
            string nV = g[inu][i].v;
            if(used[nV]==0){
                now  = g[inu][i];
                now.load = min(now.load,l);
                now.u = now.v;
                now.v = u;
                //cout<<pq.size()<<endl;
                pq.push(now);
                //cout<<pq.size()<<endl;
                //cout<<now.u<<" "<<now.v<<" "<<now.load<<endl;
            }
        }
        //cout<<n.u<<" "<<n.v<<" "<<n.load<<" "<<pq.empty()<<endl;
    }
    return -1;
}

void clr(){
    used.clear();
    ind.clear();
    for(int i=0;i<210;i++) g[i].clear();
    index = 1;
    while(!pq.empty()) pq.pop();
}

void indexing(string s){
    if(ind[s]>0) return ;
    ind[s] = index;
    index++;
}

node create(string u,string v,int load){
    node ne;
    ne.u = u;
    ne.v = v;
    ne.load = load;
    return ne;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int n,m;
    string a,b;
    int dis;
    int inX,inY;
    node nod;
    int scn = 1;
    while(cin>>n>>m){
            if(n==0&&m==0) break;
        clr();
        for(int i=0;i<m;i++){
            cin>>a>>b>>dis;
            indexing(a);
            indexing(b);
            inX = ind[a];
            inY = ind[b];
            nod = create(a,b,dis);
            g[inX].push_back(nod);
            nod = create(b,a,dis);
            g[inY].push_back(nod);
        }
        cin>>a>>b;
        dis = mst(a,b);
        cout<<"Scenario #"<<scn<<endl;
        if(dis<0) dis = 0;

        cout<<dis<<" tons"<<endl<<endl;;
        scn++;
    }
}
