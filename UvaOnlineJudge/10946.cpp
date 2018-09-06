#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

char c[100][100];
int v[100][100];
int n,m;
vector<pair<int,char> > ans;
pair<int,char> p;
int dx[]={0,0,-1,1};
int dy[]={-1,1,0,0};

int dfs(int x,int y,char ca){
    if(x==n||x<0||y<0||y==m) return 0;
    //cout<<" 1 "<<endl;
    if(c[x][y]=='.') return 0;
    //cout<<" 2 "<<endl;
    if(c[x][y]!=ca) return 0;
    //cout<<" 3 "<<endl;
    if(v[x][y] == 1) return 0;
    v[x][y] = 1;
    int ret = 1;
    //cout<<ret<<endl;
    for(int i=0;i<4;i++)
        ret = ret + dfs(x+dx[i],y+dy[i],ca);
    //cout<<" f "<<ret<<endl;
    return ret;
}

bool comp(const pair<int,char>&lhs,const pair<int,char>&rhs){
    if(lhs.first==rhs.first) return lhs.second<rhs.second;
    return lhs.first>rhs.first;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int prb = 1;
    char ch;
    int l;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++)
            scanf("%s",&c[i]);
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++){
                if(!v[i][j]&&c[i][j]!='.'){
                    ch = c[i][j];
                    l = dfs(i,j,ch);
                    p.first = l;
                    p.second = ch;
                    //cout<<ch<<" "<<l<<endl;
                    ans.push_back(p);
                }
            }
        sort(ans.begin(),ans.end(),comp);
        cout<<"Problem "<<prb<<":"<<endl;
        int lt = ans.size();
        for(int i=0;i<lt;i++)
            cout<<ans[i].second<<" "<<ans[i].first<<endl;
        ans.clear();
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                v[i][j] = 0;
        prb++;
    }
}
