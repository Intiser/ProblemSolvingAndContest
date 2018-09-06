#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];

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
    long long int n,tmp,ans;
    while(cin>>n){
        if(n==0) break;
        tmp=n; ans=n;
        for(int i=0;prime[i]*prime[i]<=n&&i<in;i++){
            if(tmp%prime[i]==0){
                ans=ans*(prime[i]-1);
                ans=ans/prime[i];
                while(tmp%prime[i]==0){
                    tmp=tmp/prime[i]; //cout<<prime[i]<<endl;
                }
            }
        }
        if(tmp>1){
            ans=ans*(tmp-1);
            ans=ans/tmp; //cout<<tmp<<endl;
        }


        cout<<ans<<endl;

    }
}

