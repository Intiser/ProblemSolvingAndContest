#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli n;
lli m;
lli k;
lli vis[100][100];
lli arr[100][100];

lli rec(lli a,lli b){
    if(a>n-k&&b==m&&a<=n){
        arr[a][b] = 1;
        vis[a][b] = 1;
        return 1;
    }
    if(a>n) return 0;
    if(b>m) return 0;
    if(vis[a][b]==1) return arr[a][b];
    lli tot = 0;
    for(int i=1;i<=k;i++){
        tot = tot + rec(a+i,b+1);
    }
    vis[a][b] = 1;
    arr[a][b] = tot;
    return tot;
}

void clr(){
    for(int i=0;i<=50;i++)
    for(int j=0;j<=50;j++) {
        arr[i][j] = 0;
        vis[i][j] = 0;
    }
}


void print(){
    for(int i=0;i<=n;i++) {
        for(int j=0;j<=m;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    while(cin>>n>>m>>k){
        cout<<rec(1,1)<<endl;
        //print();
        clr();
    }
}
