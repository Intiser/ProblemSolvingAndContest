#include<iostream>
#include<stdio.h>

using namespace std;

int arr[20][20];
int eight[20];
int four[20];
int two[20];

void quater(){
    for(int i=0;i<8;i++){
        int x = 2*i;
        int y = 2*i+1;

        if(arr[x][y]>arr[y][x]){
            eight[i] = x;
        }
        else
            eight[i] = y;
        cout<<eight[i]<<endl;
    }
}

void semi(){
    for(int i=0;i<4;i++){
        int x = eight[2*i];
        int y = eight[2*i+1];
        if(arr[x][y]>arr[y][x]){
            four[i] = x;
        }
        else
            four[i] = y;
        cout<<four[i]<<endl;
    }
}

void finale(){
     for(int i=0;i<2;i++){
        int x = eight[2*i];
        int y = eight[2*i+1];
        if(arr[x][y]>arr[y][x]){
            two[i] = x;
        }
        else
            two[i] = y;
        cout<<two[i]<<endl;
    }
}

int main(){
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            cin>>arr[i][j];
        }
    }
    quater();
    semi();
    finale();
}
