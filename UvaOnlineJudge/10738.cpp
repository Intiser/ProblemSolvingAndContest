#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000005];
int prime[1000005];
int tot;
int mu[1000005];
int sum[1000005];

int funct(int n,int in){
    int tmp=n; tot=0;
    int fl=0;
    for(int i=0;i<in&&prime[i]*prime[i]<=tmp;i++){
        if(tmp%prime[i]==0){
                int cnt=0;
            while(tmp%prime[i]==0){
                tmp=tmp/prime[i];
                cnt++; tot++;
            }
            if(cnt>1) fl=1;
        }
    }
    if(tmp>1){
        tot++;
    }
    if(fl==0) return 1;
    else return 0;
}


int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=1000000;i+=2) flag[i]++;
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=1000000;j+=i)
        flag[j]++;
        }
    }
    //cout<<prime[0]<<endl;

    mu[1]=1; sum[1]=1;
    int tp;
    for(int i=2;i<=1000000;i++){
        if(flag[i]){
            tp=funct(i,in);
            if(tp==0) mu[i]=0;
            else {
                if(tot%2==0) mu[i]=1;
                else mu[i]=-1;
            }
            sum[i]=sum[i-1]+mu[i];
        }
        else {
            mu[i]=-1;
            sum[i]=sum[i-1]+mu[i];
        }
    }
    int n,a,b;
    while(cin>>n){
        if(n==0) break;
        a=mu[n];
        b=sum[n];
        printf("%8d%8d%8d\n",n,a,b);
    }
}

