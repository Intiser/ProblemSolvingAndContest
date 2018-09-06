#include<iostream>
#include<stdio.h>

using namespace std;

int flag[15][15];
int arr[15][15];

long long int tot(int x,int y,int p,int q){
    long long int total = 0;
    for(int i=x;i<=p-x;i++)
        if(!flag[i][y]){
            total += arr[i][y];
            flag[i][y]=1;
        }
    //cout<<" # "<<total<<endl;
    for(int i=y;i<=q-y;i++)
        if(!flag[x][i]){
            total += arr[x][i];
            flag[x][i]=1;
        }
    //cout<<" # "<<total<<endl;
    for(int i=x;i<=p-x;i++)
        if(!flag[i][q-y]){
            total += arr[i][q-y];
            flag[i][q-y] = 1;

        }
    //cout<<" # "<<total<<endl;
    for(int i=y;i<=q-y;i++)
    if(!flag[p-x][i]){
            total += arr[p-x][i];
            flag[p-x][i] = 1;

        }
    //cout<<" # "<<total<<endl;
    //cout<<" # "<<total<<" "<<x<<" "<<y<<" "<<p<<" "<<q<<" "<<endl;
    return total;
}

void clr(int n){
    for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                flag[i][j] = 0;
}

int main(){
    int cas = 1;
    int n;
    long long result;
    while(cin>>n){
            if(n==0) break;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                scanf("%d",&arr[i][j]);
        int r = n/2;
        if(n%2) r++;
        cout<<"Case "<<cas<<":";
        for(int i=0;i<r;i++){
            result = tot(i,i,n-1,n-1);
            cout<<" "<<result;
        }
        cout<<endl;
        clr(n);
        cas++;
    }
}
