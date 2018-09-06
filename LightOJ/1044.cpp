#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

char s[1005];
//int dp[1005][1005];
//int vis[1005][1005];
int siz;

int dp[1005][1005];
int dp1[1005];
int vis[1005][1005];
int vis1[1005];

vector<int>fns[1005];



lli rec(int i,int j){
    //cout<<i<<" "<<j<<endl;
    //if( i == siz ) return 0;
    //if( j < 0) return 0;
    if(i > j ) return 1;
    if(i == j) {
        fns[i].push_back(j);
        return 1;
    }
    if( vis[i][j]) return dp[i][j];
    vis[i][j] = 1;
    dp[i][j]  = 0;
    int mn = 100005;
    int r = 0;
    int r1 = 0;
    int r2 = 0;
    if(s[i] == s[j]){
        r =  rec(i+1,j-1) ;
        mn = min(mn,r);
        if(r == 1) fns[i].push_back(j);
    }
    r1 =  1+rec(i+1,j);
    mn = min(mn,r1);
    //cout<<mn<<endl;
    r2 =  1+rec(i,j-1);
    mn = min(mn,r2);
    //cout<<mn<<endl;
    //cout<<r<<" "<<r1<<" "<<r2<<endl;
    //cout<<i<<" ## "<<j<<" ## "<<mn<<endl;
    return dp[i][j] = mn;

}
/*

lli rec(int i,int j){


}
*/

int check(int st,int ee,int en){
    //cout<<st<<" $$$ "<<ee<<" "<<en<<endl;
    if(ee == en) return 0;
    int siz = fns[st].size();
    if( siz == 0) return 10005;
    if(vis1[st] == 1) return dp1[st];
    vis1[st] = 1;
    int mn = 10005;
    for(int i=0;i<siz;i++){
        int e = fns[st][i];
        //cout<<st<<" $$$$ "<<e<<endl;
        int r = check(e+1,e,en)+1;
        //cout<<r<<endl;
        mn = min(mn,r);
    }

    //cout<<st<<" "<<mn<<endl;
    return dp1[st] = mn;

}

//#define ahsan0045

int main(){
    #ifdef ahsan0045
        freopen("in.txt","r",stdin);
        freopen("out.txt","w",stdout);
    #endif // ahsan0045

    int t;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%s",s);
        siz = strlen(s);
        memset(dp,0,sizeof(dp));
        memset(dp1,0,sizeof(dp1));
        memset(vis,0,sizeof(vis));
        memset(vis1,0,sizeof(vis1));
        lli tt = rec(0,siz-1);
        lli ans = check(0,0,siz - 1);
        //if( ans == 10005) ans = siz;
        printf("Case %d: %lld\n",cas,ans);
        for(int i=0;i<=1000;i++) fns[i].clear();
    }
}

