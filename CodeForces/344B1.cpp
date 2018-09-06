#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int arr[5100][5100];

pair<int,int> rw[5100];
pair<int,int> cl[5100];

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
                if(rw[i].second<cl[j].second){
                    arr[i][j] = cl[j].first;
                }
                else if(rw[i].second>cl[j].second){
                    arr[i][j] = rw[i].first;
                }
                //cout<<rw[i].second<<" "<<cl[j].second<<endl;
            }
    }
}
void clk(int n ,int m){
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
    int n,m,k,a,b,c,r=0,ck=0;
    while(cin>>n>>m>>k){
        for(int i=0;i<k;i++){
            cin>>a>>b>>c;
            if(a==1){
                rw[b-1].first = c;
                rw[b-1].second =  i+1;

            }
            else if(a==2){
                cl[b-1].first = c;
                cl[b-1].second =  i+1;

            }
        }
        clr(n,m);
        print(n,m);
        clk(n,m);

    }
}
