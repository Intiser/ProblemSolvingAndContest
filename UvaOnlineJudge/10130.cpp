#include<iostream>
#include<stdio.h>

using namespace std;

int prc[1050];
int wgt[1050];
int res[1050][50];

void knapsack(int N,int W){
    for(int i=1;i<=N;i++){
        for(int w =1;w<=W;w++){
            if(wgt[i]<=w){
                res[i][w] = max(res[i-1][w],prc[i]+res[i-1][w-wgt[i]]);
            }
            else{
                res[i][w] = res[i-1][w];
            }
        }
    }
}

void clr(int N,int W){
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++) res[i][j] = 0;
    }
}

int main(){
    int t;
    int n,g;
    int p,w,a;
    int tot;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>prc[i]>>wgt[i];
        }
        tot = 0;
        knapsack(n,30);
        cin>>g;
        for(int i=0;i<g;i++){
            cin>>a;
            tot = tot + res[n][a];
        }
        cout<<tot<<endl;
        clr(n,30);
    }
}
