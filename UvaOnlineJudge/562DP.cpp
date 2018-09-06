#include<iostream>
#include<stdio.h>

using namespace std;

int wt[1000];
int res[150][500100];

void clr(int N,int W){
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++) res[i][j] = 0;
    }
}

int knapsack(int N,int W){
    for(int i=1;i<=N;i++){
        for(int w=0;w<=W;w++){
            if(wt[i]<=w){
                res[i][w] = max(wt[i]+res[i-1][w - wt[i]],res[i-1][w]);
            }
            else{
                res[i][w] = res[i-1][w];
            }
        }
    }
    return res[N][W];
}

void print(int N,int W){
    for(int i=0;i<=N;i++){
        for(int j=0;j<=W;j++) cout<<res[i][j]<<" ";
        cout<<endl;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,n,w,tot,ans;
    cin>>t;
    while(t--){
        cin>>n;
        tot = 0;
        for(int i=1;i<=n;i++){
            cin>>wt[i];
            tot = tot + wt[i];
        }
        w  = tot / 2;
        ans = tot - knapsack(n,w)*2;
        cout<<ans<<endl;
        //print(n,w);
        clr(n,w);
    }
}
