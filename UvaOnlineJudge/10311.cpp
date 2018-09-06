#include<iostream>
#include<stdio.h>

using namespace std;

#define mx 100000010

long long int flag[mx];
long long int prime[mx];

int isPrime(int n,int in){
    if(n==0) return 0;
    if(n==1) return 0;
    if(n<=100000){
        if(flag[n]) return 0;
        else return 1;
    }
    for(int i=0;i<in&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0) return 0;
    }
    return 1;
}

int main(){
    long long int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(long long int i=4;i<=100000000;i+=2) flag[i]++;
    for(long long int i=3;i<=10000;i+=2){
        if(!flag[i]){
        //prime[in]=i; in++;
        for(long long int j=i*i;j<=100000000;j+=(i+i))
        flag[j]++;
        }
    }
    long long int n,a,b,chk,st;
    while(cin>>n){
        chk=0;
        if(n%2==0) st=n/2;
        else st=n/2+1;
        if(n!=0)
        for(int i=st;i>=1;i--){
            a=i; b=n-i;
            if(!flag[a]&&!flag[b]){
                chk=1;
                break;
            }
        }
        if(chk==1){
            printf("%d is the sum of %d and %d.\n",n,a,b);
        }
        else
            printf("%d is not the sum of two primes!\n",n);
    }
}

