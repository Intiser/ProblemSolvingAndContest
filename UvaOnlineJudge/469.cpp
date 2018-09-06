#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

string g[105];
int vis[105][105];
int n,m;
int dx[]={-1,0,1,-1,1,-1,0,1};
int dy[]={-1,-1,-1,0,0,1,1,1};

int dfs(int x,int y){
    if(x<0||y<0||x==n||y==m) return 0;
    if(vis[x][y]==1) return 0;
    if(g[x][y]=='L') return 0;
    vis[x][y] = 1;
    int ret = 1;
    for(int i=0;i<8;i++)
        ret += dfs(x+dx[i],y+dy[i]);

    return ret;
}

void clr(int n,int m){
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            vis[i][j] = 0;
}

int check(string tmp){
    int len = tmp.size();
    for(int i=0;i<len;i++)
        if(tmp[i]!='L'&&tmp[i]!='W'&&(tmp[i]>='0'&&tmp[i]<='9')) return -1;
    return 1;
}

int main(){
    int t;
    //int a,b,c;
    string ter;
    cin>>t;
    cin.ignore();
    getchar();
    for(int cas = 1;cas<=t;cas++){

        int in = 0;
        do{
            getline(cin,g[in]);
            in++;
        }while(check(g[in-1])==1);

        ter = g[in-1];
         do{

            n = in-1;
            m = g[in-2].size();
            int len = ter.size();
           int  a = 0, b= 0, c=0;
            //cout<<" uhun "<<len<<" "<<m<<endl;
            //cout<<a<<" uhun "<<b<<" "<<c<<" "<<ter<<endl;
            for(int i=0;i<len;i++){
                if(c==0){
                    if(ter[i]>='0'&&ter[i]<='9')
                        a = a*10 + (ter[i]-'0');
                    else
                        c++;
                }
                else if(c==1){
                    if(ter[i]>='0'&&ter[i]<='9')
                        b = b*10 + (ter[i]-'0');
                    else
                        c++;
                }
            }
            //cout<<"#"<<a<<" "<<b<<endl;
            int res = dfs(a-1,b-1);
            cout<<res<<endl;
            clr(n,m);
            getline(cin,ter);

         }while(ter.size()>0);
           /* cin>>a>>b;
            //cout<<"#"<<a<<" "<<b<<endl;
            //cin.ignore();
            res = dfs(a-1,b-1);
            cout<<res<<endl;
            clr(n,m);*/
            if(cas!=t) printf("\n");
        for(int i=0;i<=n+1;i++)
            g[i].clear();
        //cout<<n<<" "<<m<<endl;
    }
}
