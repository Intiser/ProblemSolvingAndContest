#include<iostream>
#include<stdio.h>

using namespace std;

int flag[11];

int funct(int n){
    flag[0]=0; flag[1]=0; flag[2]=0; flag[3]=0; flag[4]=0;
    flag[5]=0; flag[6]=0; flag[7]=0; flag[8]=0; flag[9]=0;
    while(n/10){
        if(flag[n%10]) return 0;
        flag[n%10]++;
        n=n/10;
    }
    if(flag[n]) return 0;

    return 1;
}

int main(){
    int N,M,cnt;
    while(cin>>N>>M){
        cnt=0;
        for(int i=N;i<=M;i++){
            if(funct(i)) cnt++;
        }
        cout<<cnt<<endl;
    }
}
