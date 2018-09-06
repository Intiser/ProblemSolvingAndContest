#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

char ar[105][105];
int vis[105][105];
vector<int> g[105];

int n,m;
int dx[] = {-1,0,1,-1,1,-1,0,1};
int dy[] = {-1,-1,-1,0,0,1,1,1};

void dfs(int x,int y){
    if(x<0||x==n||y<0||y==m) return;
    if(ar[x][y]=='*') return ;
    if(vis[x][y] == 1) return;
    vis[x][y] = 1;
    //cout<<x<<" "<<y<<endl;
    for(int i=0;i<8;i++){
        dfs(x+dx[i],y+dy[i]);
    }

}

void check(){
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                printf("%d ",vis[i][j]);
            printf("\n");
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++){
                scanf("%s",&ar[i]);
        }
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j]&&ar[i][j]=='@'){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
        //check();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
            vis[i][j] = 0;
        }
    }

}
