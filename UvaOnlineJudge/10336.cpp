#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

char g[10000][10000];
int vis[10000][10000];
pair<int,int> arr[50];
int n,m;
void dfs(int x,int y,char c){
    if(x<0||y<0||x==n||y==m) return ;
    if(c != g[x][y]) return;
    if(vis[x][y]==1) return ;
    vis[x][y] = 1;
    dfs(x-1,y,c);
    dfs(x+1,y,c);
    dfs(x,y-1,c);
    dfs(x,y+1,c);
}

bool compare(const pair<int,int>& lhs, const pair<int,int>& rhs){
  if(lhs.first == rhs.first)
    return lhs.second < rhs.second;
  return lhs.first > rhs.first;
}

int main(){
    int t;
    int cnt = 0;
    for(int i=0;i<30;i++)
            arr[i].second = 'a' + i;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>m;
        for(int i=0;i<n;i++)
            scanf("%s",&g[i]);
            cnt = 0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(!vis[i][j]){
                    dfs(i,j,g[i][j]);
                    if(!arr[g[i][j] - 'a'].first) cnt++;
                    arr[g[i][j] - 'a'].first++;
                }
            }
        for(int i=0;i<30;i++)
            arr[i].second = 'a' + i;
        sort(arr,arr+26,compare);
        printf("World #%d\n",cas);
        for(int i=0;i<cnt;i++){
            printf("%c: %d\n",arr[i].second,arr[i].first);
            arr[i].first = 0;
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                vis[i][j] = 0;
    }
}
