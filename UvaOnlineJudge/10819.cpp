#include<iostream>
#include<stdio.h>

using namespace std;

int p[150];
int rat[150];
int w[105][10205];

int knapsack(int n,int mon){
    for(int i=1;i<=mon+200;i++){
        if(i>=p[1]) w[1][i] = rat[1];
        else w[1][i] = 0;
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=mon+200;j++){
            if(j<p[i]){
                w[i][j] = w[i-1][j];
            }
            else{
                w[i][j] = max(rat[i]+w[i-1][j-p[i]],w[i-1][j]);
            }
        }
    }
    return w[n][mon+200];
}

void clr(int n,int m){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m+200;j++) w[i][j] = 0;
    }
}


int main(){
    int amm,n;
    while(cin>>amm>>n){
        for(int i=1;i<=n;i++){
            cin>>p[i]>>rat[i];
        }
        cout<<knapsack(n,amm)<<endl;
        clr(n,amm);
    }
}
