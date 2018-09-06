#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

#define lli long long int
#define inf 100000

int dist[105][105];
vector<int>links;
int flag[105];

void init(){
    for(int i=0;i<links.size();i++){
        for(int j=0;j<links.size();j++){
            if(i!=j&&dist[links[i]][links[j]] != 1)
                dist[links[i]][links[j]] = inf;
            else if(i==j)
                dist[links[i]][links[j]] = 0;
        }
    }
}

void apsp(){
    for(int i=0;i<links.size();i++){
        for(int j=0;j<links.size();j++){
            for(int k=0;k<links.size();k++){
                if(dist[links[j]][links[k]]>(dist[links[j]][links[i]]+dist[links[i]][links[k]])&&j!=k){
                   dist[links[j]][links[k]] = dist[links[j]][links[i]]+dist[links[i]][links[k]];
                }
            }
        }
    }
}

void print(){
     for(int i=0;i<links.size();i++){
        for(int j=0;j<links.size();j++){
            cout<<dist[links[i]][links[j]]<<" ";
        }
        cout<<endl;
    }
}

double result(){
    int tot = 0;
    int cnt = 0;
    for(int i=0;i<links.size();i++){
        for(int j=0;j<links.size();j++){
            if(i!=j){
                tot = tot + dist[links[i]][links[j]];
                cnt++;
            }
        }
    }
    //cout<<tot<<endl;
    //cout<<cnt<<endl;
    return (tot*1.0)/cnt;
}

void clr(){
    for(int i=0;i<links.size();i++) flag[links[i]] = 0;
    for(int i=0;i<links.size();i++){
        for(int j=0;j<links.size();j++){
           dist[links[i]][links[j]] = inf;
        }
        //cout<<endl;
    }
    links.clear();
}

void check(int n){
    if(flag[n]) return;
    flag[n] = 1;
    links.push_back(n);
    return;
}

int main(){
    int x,y,cas = 1;
    while(cin>>x>>y){
        if(x==0&&y==0) break;
        dist[x][y] = 1;
        check(x);
        check(y);
        while(cin>>x>>y){
            if(x==0&&y==0) break;
            dist[x][y] = 1;
            check(x);
            check(y);
        }
        init();
        apsp();
        //print();
        //cout<<links.size()<<endl;
        //cout<<result()<<endl;
        printf("Case %d: average length between pages = %.3lf clicks\n",cas,result());
        cas++;
        clr();
    }
}
