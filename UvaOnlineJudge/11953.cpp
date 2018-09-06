#include<iostream>
#include<stdio.h>

using namespace std;


char c[105][105];
int flag[105][105];
int in;
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};

void flood(int r,int cl,int clr,int n){
    if(r==n||r<0||cl==n||cl<0) return;
    if(flag[r][cl]) return ;
    if(c[r][cl]=='.') return ;
    flag[r][cl]=clr;
    for(int i=0;i<4;i++){
        int x = dx[i] + r;
        int y = dy[i] + cl;
        flood(x,y,clr,n);
    }
}

void clr(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            flag[i][j] = 0;
        }
    }
}

int check(int n){
    clr(n);
    int cnt = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i][j]=='x'&&!flag[i][j]){
                flood(i,j,cnt,n);
                cnt++;
            }
        }
    }
    return cnt;
}

void print(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<flag[i][j];
        }
        cout<<endl;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t,n;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>n;
        for(int i=0;i<n;i++){
            scanf("%s",&c[i]);
        }
        cout<<"Case "<<cas<<": ";
        cout<<check(n)-1<<endl;
        //print(n);
    }
}
