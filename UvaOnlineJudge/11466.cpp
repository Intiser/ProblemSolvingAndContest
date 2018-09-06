#include<iostream>
#include<stdio.h>

using namespace std;

long long int flag[12500000];
int prime[12500000];


long long int funct(long long int n,int len){
    long long int tmp=n;
    long long int ans=0;
    for(int i=0;prime[i]*prime[i]<=tmp&&i<len;i++){
        if(tmp%prime[i]==0){
            ans=prime[i];
            while(tmp%prime[i]==0){
                tmp=tmp/prime[i];

            }
        }
        cout<<"yes"<<endl;
    }
    if(tmp>1){
       ans=tmp;
    }
    if(ans==0||ans==n){
        return -1;
    }

    return ans;
}


int main(){
    int nw=1;
    flag[0]=1; flag[1]=1; prime[0]=2;  cout<<prime[0]<<endl; //cout<<nw<<endl;
    for(long long int i=4;i<=12500000;i+=2) flag[i]++;
    nw=1;  cout<<prime[0]<<endl;
    for(long long int i=3;i<=12500000;i+=2){
        if(!flag[i]){
        prime[nw]=i; nw++;
        for(long long int j=i*i;j<12500000;j+=(i+i))
        flag[j]++;
        }
    }
    cout<<prime[0]<<endl;
    long long int n,ret;
    while(cin>>n){
        if(n==0) break;
        ret=funct(n,nw);
        printf("%lld\n",ret);

    }
}

