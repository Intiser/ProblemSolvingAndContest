#include<iostream>
#include<stdio.h>

using namespace std;

int n1,n2;
int nn1[150];
int nn2[150];
int arr[150][150];

int dp(){
    for(int i=0;i<=n1;i++) arr[i][0] = 0;
    for(int i=0;i<=n2;i++) arr[0][i] = 0;
    for(int i=1;i<=n1;i++){
        for(int j=1;j<=n2;j++){
            int mx = max(arr[i-1][j],arr[i][j-1]);
            if(nn1[i]==nn2[j]){
                arr[i][j] = max(arr[i-1][j-1]+1,mx);
            }
            else arr[i][j] = mx;
        }
    }
    return arr[n1][n2];
}

int main(){
    int cas =1;
    while(cin>>n1>>n2){
            if(n1==0&&n2==0) break;
        for(int i=1;i<=n1;i++) cin>>nn1[i];
        for(int i=1;i<=n2;i++) cin>>nn2[i];
        cout<<"Twin Towers #"<<cas<<endl;
        cout<<"Number of Tiles : "<<dp()<<endl<<endl;
        cas++;
    }
}
