#include<iostream>
#include<stdio.h>

using namespace std;

string s[110];
int n,m,q;

int check(int r,int c,int l,char e){
    if(r+l>n) return 0;
    if(c+l>m) return 0;
    for(int i=r-1;i<r+l;i++){
        for(int j=c-1;j<c+l;j++){
            if(e!=s[i][j]) return 0;
        }
    }
    return 1;
}

int result(int r,int c){
    char t = s[r-1][c-1];
    int siz = 1;
    while(check(r,c,siz,t)){
        siz++;
    }
    return siz-1;
}

int main(){
    int t;
    int a,b;
    cin>>t;
    while(t--){
        cin>>n>>m>>q;
        for(int i=0;i<n;i++) cin>>s[i];
        for(int i=0;i<q;i++){
            cin>>a>>b;
            cout<<result(a,b)<<endl;
        }
    }
}
