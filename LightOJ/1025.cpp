#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

char s[100];
lli dp[100][100];
lli vis[100][100];

lli rec(int i,int j){
    if(i > j) return 0;
    if(i == j) return 1;
    if( vis[i][j]) return dp[i][j];
    vis[i][j] = 1;
    if(s[i] == s[j]){
        dp[i][j] += rec(i+1,j)+1;
        dp[i][j] += rec(i,j-1);
        //dp[i][j] += rec(i+1,j-1);
    }
    else {
        dp[i][j] += rec(i+1,j);
        dp[i][j] += rec(i,j-1);
        dp[i][j] -= rec(i+1,j-1);
    }
    return dp[i][j];

}

int main(){
    int t;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%s",s);
        int siz = strlen(s);
        memset(dp,0,sizeof(dp));
        memset(vis,0,sizeof(vis));
        lli ans = rec(0,siz-1);
        printf("Case %d: %lld\n",cas,ans);
    }
}
