#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli flag[10000500];
lli prime[10000500];
lli in;

void seive(){
    in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=10000000;i+=2) flag[i]++;
    for(int i=3;i<=10000000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=10000000;j+=i)
        flag[j]++;
        }
    }
    //cout<<in<<endl;
    //cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;
}

lli funct(lli n){
    lli mx = -1;
    lli tmp = n;
    lli cnt = 0;
    for(int i=0;prime[i]*prime[i]<=tmp&&i<in;i++){
        if(tmp%prime[i]==0){
            while(tmp%prime[i]==0){
                tmp = tmp / prime[i];
            }
            mx = prime[i];
            cnt++;
        }
    }
    if(tmp>1) {
        cnt++;
        mx = tmp;
    }
    if(cnt<2) return -1;

    return mx;
}

int main(){
    seive();
    lli n;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n){
        if(n==0) break;
        if(n<0) n = -n;
        cout<<funct(n)<<endl;
    }
}
