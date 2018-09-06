#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];

long long int funct(long long int n,long long int in){
    long long int tmp=n;
    long long int div=1;
    if(n==0) return 0;

    for(int i=0;prime[i]*prime[i]<=tmp&&i<in;i++){
        if(tmp%prime[i]==0){
                int exp=0;
            while(tmp%prime[i]==0){
                tmp=tmp/prime[i];
                exp++;
            }
            div*=(exp+1);
        }
    }
    if(tmp>1){
        div=div*2;
    }
    return div;
}

int main(){
    long long int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<100000;j+=i)
        flag[j]++;
        }
    }

    long long int t,U,L,maxm,ret,ans,n;
    cin>>t;
    while(t--){
        cin>>L>>U;
        maxm=0;
        for(long long int i=L;i<=U;i++){
            ret=funct(i,in);
            if(maxm<ret) {maxm=ret;
                ans=i;
            }
        }
        //cin>>n;
        //ret=funct(n,in);
        //cout<<maxm<<endl;
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,U,ans,maxm);
       }
}
