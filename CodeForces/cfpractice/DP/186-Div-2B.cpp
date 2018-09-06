#include<iostream>
#include<stdio.h>

using namespace std;

int dp[1000100];

int main(){
    int n;
    string s;

    cin>>s;
    int siz = s.size();
    dp[0] = 0;
    int cnt = 0;
    for(int i=1;i<siz;i++){
        if(s[i]==s[i-1]){
            cnt++;
        }
        dp[i] = cnt;
    }
    int m;
    cin>>m;
    int x,y;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        int ans = dp[y-1] - dp[x-1];
        cout<<ans<<endl;
    }
}
