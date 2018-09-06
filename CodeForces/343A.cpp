#include<iostream>
#include<stdio.h>

using namespace std;

string s[105];

int check(int n){
    int tot = 0;
    tot = n*(n+1);
    tot = tot / 2;
    return tot;
}

int row(int n){
    int total = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt = 0;
        for(int j=0;j<n;j++){
            if(s[i][j]=='C') cnt++;
        }
        total = total + check(cnt-1);
    }
    return total;
}

int col(int n){
    int total = 0;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt = 0;
        for(int j=0;j<n;j++){
            if(s[j][i]=='C') cnt++;
        }
        total = total + check(cnt-1);
    }
    return total;
}
int main(){
        int n,ans;
        while(cin>>n){
            for(int i=0;i<n;i++){
                cin>>s[i];
            }
            ans = 0;
            ans = ans + row(n);
            ans = ans + col(n);
            cout<<ans<<endl;
        }
}
