#include<iostream>
#include<stdio.h>
#include<cstring>
#include<algorithm>

using namespace std;

char c[30][30];
int vis[30][30];
int n;
int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={-1,-1,-1,0,0,1,1,1};

int dfs(int x,int y){
    if(x<0||y<0||x==n||y==n) return 0;
    if(vis[x][y]) return 0;
    if(c[x][y]=='0') return 0;
    vis[x][y] = 1;
    int ret = 1;
    for(int i=0;i<8;i++){
        ret = ret + dfs(x+dx[i],y+dy[i]);
    }
    return ret;
}

int main(){
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        scanf("\n");
        scanf("%s",&c[0]);
        int len = strlen(c[0]);
        n = len ;
        for(int i=1;i<n;i++)
            scanf("%s",&c[i]);
            int res=0;
            int maxm=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
            if(!vis[i][j]&&c[i][j]=='1')
                res = dfs(i,j);
            if(res>maxm) maxm = res;
        }
        cout<<maxm<<endl;
        if(cas!=t) cout<<endl;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                vis[i][j] = 0;
    }
}
