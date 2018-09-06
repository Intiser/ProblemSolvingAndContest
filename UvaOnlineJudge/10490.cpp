#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int flag[100005];
int prime[100005];
int arr[35];
long long int tp[35];
long long int tem[35];

int isprime(long long int n,int in){
    for(int i=0;i<in&&prime[i]*prime[i]<=n;i++){
        if(n%prime[i]==0) return 1;
    }
    return 0;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=100000;j+=i)
        flag[j]++;
        }
    }
    //cout<<prime[0]<<endl;
    long long int tmp;
    int n;
    for(int i=2;i<32;i++){
        tp[i]=pow(2,i)-1;
        tem[i]=pow(2,i-1);
        arr[i]=isprime(tp[i],in);
        //cout<<tp[i]*tem[i]<<endl;
    }

    while(cin>>n){
        if(n==0) break;
        if(!flag[n]&&!arr[n]){
            printf("Perfect: %lld!\n",tem[n]*tp[n]);
        }
        else if(!flag[n]&&arr[n]){
            printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else {
            printf("Given number is NOT prime! NO perfect number is available.\n");
        }
    }

}

