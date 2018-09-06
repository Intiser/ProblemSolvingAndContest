#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];
long long keep[50010];

long long int funct(int n,int in){
    long long int tmp,ans;
        tmp=n; ans=n;

        for(int i=0;prime[i]*prime[i]<=n&&i<in;i++){
            if(tmp%prime[i]==0){
                ans=ans*(prime[i]-1);
                ans=ans/prime[i];
                while(tmp%prime[i]==0){
                    tmp=tmp/prime[i];
                }
            }
        }
        if(tmp>1){
            ans=ans*(tmp-1);
            ans=ans/tmp;
        }
        return ans;
}

int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<100000;j+=i)
        flag[j]++;
        }
    }
    keep[1]=1;
    for(int i=2;i<=50000;i++){
        keep[i]=keep[i-1]+2*funct(i,in);
    }
    int k;
    while(cin>>k){
        if(k==0) break;
        cout<<keep[k]<<endl;
    }
}

