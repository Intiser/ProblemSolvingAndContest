#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int  vis[100][100];
char  g[100][100];
int n,m,p;
int flag = 0;
int loop = 0;
int X,Y;

int dfs(int x,int y){
    if(x<0||y<0||x==n||y==m) return 0;
    //cout<<x<<"# "<<y<<endl;
    if(vis[x][y]==1) {
        flag = 1;
        X = x;
        Y = y;
        return 0;
    }
    int res=0;
    vis[x][y] = 1;
    if(g[x][y]=='W'){
        res = dfs(x,y-1);
    }
    else if(g[x][y]=='E'){
        res = dfs(x,y+1);
    }
    else if(g[x][y]=='N'){
        res = dfs(x-1,y);
    }
    else if(g[x][y]=='S'){
        res = dfs(x+1,y);
    }

    if(X==x&&Y==y) loop = res+1;

    return res + 1;
}

int main(){
    while(cin>>n>>m>>p){
            if(n==0&&m==0&&p==0) break;
        for(int i= 0;i<n;i++){
            scanf("%s",&g[i]);
        }
        flag = 0;
        loop = 0;
        X = -10; Y = -10;
        int res = dfs(0,p-1);
        if(!flag)
            cout<<res<<" step(s) to exit"<<endl;
        else
            cout<<res-loop<<" step(s) before a loop of "<<loop<<" step(s)"<<endl;

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                vis[i][j] = 0;
    }
}
