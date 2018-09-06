#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

char s[50][50];
int vis[50][50];
int dx[] = {-1,0,1,-1,1,-1,0,1};
int dy[] = {-1,-1,-1,0,0,1,1,1};
int n;

void dfs(int x,int y){
    if(x<0||y<0||x==n||y==n) return;
    if(vis[x][y]==1) return;
    if(s[x][y]=='0') return;
    vis[x][y] = 1;
    for(int i=0;i<8;i++){
        dfs(x+dx[i],y+dy[i]);
    }
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int cas = 1;
    while(cin>>n){
        for(int i=0;i<n;i++) scanf("%s",&s[i]);
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j]&&s[i][j]=='1'){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout<<"Image number "<<cas<<" contains "<<cnt<<" war eagles."<<endl;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                vis[i][j]=0;
        cas++;
    }
}
