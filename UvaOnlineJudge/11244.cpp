#include<iostream>
#include<stdio.h>

using namespace std;

int n,m;
char c[105][105];
int fl[105][105];
int dx[] = {-1,0,1,-1,1,-1,0,1};
int dy[] = {-1,-1,-1,0,0,1,1,1};

int chck(int x,int y){
    if(x<0||y<0||x==n||y==m) return 0;
    if(c[x][y]=='.') return 0;
    if(fl[x][y]==1) return 1;
    if(c[x][y]=='*'){
    fl[x][y] = 1;
    return 1;
    }
    else return 0;
}

int dfs(int x,int y){

    fl[x][y] = 1;
    int ret = 1;
    for(int i=0;i<8;i++){
        ret += chck(x+dx[i],y+dy[i]);
    }
    return ret;
}

void clr(int x,int y){
    for(int i=0;i<=x;i++)
        for(int j=0;j<=y;j++)
            fl[i][j] = 0;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int res;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        int cnt = 0;
        for(int i=0;i<n;i++) scanf("%s",&c[i]);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(!fl[i][j]&&c[i][j]=='*'){
                    res = dfs(i,j);
                    //cout<<i<<" "<<j<<" "<<res<<endl;
                    if(res==1) cnt++;
                }
        cout<<cnt<<endl;
        clr(n,m);
    }
}
