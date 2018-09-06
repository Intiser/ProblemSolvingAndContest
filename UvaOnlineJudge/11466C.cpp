#include<iostream>
#include<stdio.h>

using namespace std;

int flag[12500005];
int prime[12500005];

long long int funct(long long int n,int len){
    long long int tmp=n;
    long long int ans=-1;
    int flag=1;
    for(int i=0;prime[i]*prime[i]<=tmp&&i<len;i++){
        if(tmp%prime[i]==0){
            ans=prime[i];
            flag=0;
            while(tmp%prime[i]==0){
                tmp=tmp/prime[i];

            }
        }
        //cout<<"yes"<<endl;
    }
    if(tmp>1&&ans>-1){
        ans=tmp;
    }


    return ans;
}

int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=12500000;i+=2) flag[i]++;
    for(int i=3;i<=12500000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=12500000;j+=i)
        flag[j]++;
        }
    }
   // cout<<prime[0]<<endl;
    long long int n,ret;
    long long int tmp;
    long long int ans=-1;
    while(cin>>n){
        if(n==0) break;
        //ret=funct(n,in);
    if(n<0) n=n*(-1);
    tmp=n; ans=-1;
    int flag=1;
    for(int i=0;prime[i]*prime[i]<=tmp&&i<in;i++){
        if(tmp%prime[i]==0){
            ans=prime[i];
            flag=0;
            while(tmp%prime[i]==0){
                tmp=tmp/prime[i];

            }
        }
        //cout<<"yes"<<endl;
    }
    if(tmp!=1&&ans!=-1){
        ans=tmp;
    }
    if(flag) ans=-1;

       cout<<ans<<endl;

    }
}

