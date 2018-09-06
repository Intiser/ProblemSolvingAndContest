#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

#define lli long long int
#define inf 1000*1000*10;

struct node{
    int x;
    int y;
    int val;
    bool operator  <  (const node& p)const{
        return val > p.val;
    }
};

int arr[1051][1051];
int dist[1051][1051];
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

lli djkastra(int n,int m){
   priority_queue<node ,vector<node> > pq;
    lli tot = arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            dist[i][j] = inf;
        }
    }
    dist[0][0] = arr[0][0];
    node nod;
    nod.x  = 0;
    nod.y  = 0;
    nod.val = arr[0][0];
    pq.push(nod);
    while(!pq.empty()){
        nod = pq.top();
        pq.pop();
        int x = nod.x;
        int y = nod.y;
        if(nod.val == dist[x][y]){
                for(int i=0;i<4;i++){
                    int X = x + dx[i];
                    int Y = y + dy[i];
                    if(X>=0&&X<n&&Y>=0&&Y<m){
                            node ne;
                            ne.x = X;
                            ne.y = Y;
                            if(nod.val+arr[X][Y]<dist[X][Y]){
                                ne.val = nod.val + arr[X][Y];
                                dist[X][Y] = ne.val;
                                pq.push(ne);
                            }

                    }
                }
        }
    }
    return dist[n-1][m-1];

}



int main(){
    int t;
    int n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cin>>arr[i][j];
        }
        cout<<djkastra(n,m)<<endl;
    }
}
