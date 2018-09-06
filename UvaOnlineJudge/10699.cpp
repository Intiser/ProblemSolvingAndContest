#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000050];
int prime[1000050];

int main(){
    int in=1;
    flag[0]=1; flag[1]=0; prime[0]=2;
    for(int i=2;i<=1000000;i+=2) flag[i]++;
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i;j<1000000;j+=i)
        flag[j]++;
        }
    }
    int n;
    while(cin>>n){
        if(n==0) break;


        printf("%d : %d\n",n,flag[n]);

    }
}

