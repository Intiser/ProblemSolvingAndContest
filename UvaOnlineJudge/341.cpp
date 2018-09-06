#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

#define lli long long int
#define inf 2147483647

lli dist[100][100];
lli path[100][100];

void init(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dist[i][j] = inf;
            path[i][j] = -1;
        }
    }
}

void apsp(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(dist[j][k]>dist[j][i]+dist[i][k]){
                   dist[j][k]=dist[j][i]+dist[i][k];
                   path[j][k] = path[j][i];
                }
            }
        }
    }
}

void findpath(int src,int des){
    cout<<src;
    while(src!=des){
        src = path[src][des];
        cout<<" "<<src;
    }
    cout<<"; ";
}

int main(){
    int n;
    int x,y,t;
    int cas = 1;
    int s,d;
    while(cin>>n){
            if(n==0) break;
        init(n);
        for(int i=1;i<=n;i++){
            cin>>x;
            for(int j=0;j<x;j++){
                cin>>y>>t;
                dist[i][y] = t;
                path[i][y] = y;
            }
        }
        cin>>s>>d;
        apsp(n);
        cout<<"Case "<<cas<<": Path = "; cas++;
        findpath(s,d);
        cout<<dist[s][d]<<" second delay"<<endl;
    }
}
