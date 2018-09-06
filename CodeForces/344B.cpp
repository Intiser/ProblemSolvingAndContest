#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int arr[5100][5100];

void row(int r,int n,int val){
    for(int i=0;i<n;i++){
        arr[r][i] = val;
    }
}

void col(int c,int n,int val){
    for(int i=0;i<n;i++){
        arr[i][c] = val;
    }
}
void clr(int n ,int m){
    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr[i][j] = 0;
            }
    }
}

void print(int n,int m){
    for(int i=0;i<n;i++){
            cout<<arr[i][0];
            for(int j=1;j<m;j++){
                cout<<" "<<arr[i][j];
            }
            cout<<endl;
    }
}

int main(){
    int n,m,k,a,b,c;
    while(cin>>n>>m>>k){
        for(int i=0;i<k;i++){
            cin>>a>>b>>c;
            if(a==1){
                row(b-1,m,c);
            }
            else if(a==2){
                col(b-1,n,c);
            }
        }
        print(n,m);
        clr(n,m);
    }
}
