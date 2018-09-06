#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000050];
int prime[1000050];
int frq[1000050];
int store[1000005];
int cnt=0;

int funct(int n,int len){
    if(!flag[n]) return 1;
    int ne=0;
    int tmp=n;
    for(int i=0;prime[i]*prime[i]<=tmp&&tmp>1;i++){
        if(tmp%prime[i]==0){
            while(tmp%prime[i]==0)
            {
                frq[prime[i]]++; ne++;
                tmp=tmp/prime[i];
                //cout<<n<<endl;
            }
        }
    }
    if(tmp>1){
        frq[tmp]++; ne++;

    }
    return ne;
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
    store[0]=0; store[1]=0;
    for(int i=2;i<=1000000;i++){
            store[i]=0;
            cnt=0;
            cnt=funct(i,in);
            store[i]=store[i-1]+cnt;
            //cout<<cnt<<" "<<store[i-1]<<endl;
        }

    int k,ans;
    while(cin>>k){
        cout<<store[k]<<endl;
    }
}

