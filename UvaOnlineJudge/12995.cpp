#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli flag[1000005];
lli phi[1000005];
lli sumphi[1000005];

int main(){
    for(int i=2;i<=1000000;i++) phi[i] = i;
    flag[0] = 1; phi[0] = 0;
    flag[1] = 1; phi[1] = 0; phi[2] = 1;

    for(int i=4;i<=1000000;i+=2){
        flag[i]++;
        phi[i] = phi[i] / 2;
    }
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
            phi[i] = i-1;
            for(int j=i+i;j<=1000000;j+=i){
                flag[j]++;
                phi[j] = (phi[j]*(i-1))/i;
            }
        }
    }
    sumphi[0] = 0;
    for(int i=1;i<=1000000;i++){
        sumphi[i] = sumphi[i-1] + phi[i];
    }
    int n;
    while(cin>>n){
        if(n==0) break;
        cout<<sumphi[n]<<endl;
    }
}
