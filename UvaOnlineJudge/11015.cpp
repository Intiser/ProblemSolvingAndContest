#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

#define inf 100000000
#define lli long long int

vector<string>names;
int dist[105][105];

void init(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            if(i!=j)
                dist[i][j] = inf;
            else
                dist[i][j] = 0;
    }
}

void apsp(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=n;k++){
                if(dist[j][k]>dist[j][i]+dist[i][k]){
                    dist[j][k]=dist[j][i]+dist[i][k];
                }
            }
        }
    }
}

int result(int n){
    lli mn = 10000000000;
    int ind = 0;
    for(int i=1;i<=n;i++){
        lli tot = 0;
        for(int j=1;j<=n;j++){
            tot = tot + dist[i][j];
        }
        if(tot<mn) {
            mn = tot;
            ind = i;
        }
        //cout<<tot<<" "<<names[i-1]<<endl;
    }
    return ind - 1;
}

void clr(int n){
    init(n);
    names.clear();
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    int x,y,z;
    int cas = 1;
    string s;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++){
            cin>>s;
            names.push_back(s);
        }
        init(n);
        for(int i=0;i<m;i++){
            cin>>x>>y>>z;
            dist[x][y] = z;
            dist[y][x] = z;
        }
        apsp(n);
        cout<<"Case #"<<cas<<" : ";
        cout<<names[result(n)]<<endl;
        cas++;
        clr(n);
    }
}
