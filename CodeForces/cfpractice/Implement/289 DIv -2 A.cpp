#include<iostream>
#include<stdio.h>

using namespace std;

int arr[15][15];

int main(){
    for(int i=1;i<=10;i++) arr[1][i] = 1;
    for(int i=2;i<=10;i++){
        for(int j=1;j<=10;j++){
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
    }
    int n;
    while(cin>>n){
        cout<<arr[n][n]<<endl;
    }
}
