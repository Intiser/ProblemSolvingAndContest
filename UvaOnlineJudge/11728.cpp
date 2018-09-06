#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000050];
int prime[1000050];
int ordr[1000050];
int sum[1000050];

long long int funct(int n,int in){
    long long int tmp,ans;
     tmp=n; ans=1;
        for(int i=0;prime[i]*prime[i]<=n&&i<in;i++){
            if(tmp%prime[i]==0){



                while(tmp%prime[i]==0){
                    tmp=tmp/prime[i];
                     //cout<<prime[i]<<" ";
                     ans=ans+prime[i];
                }
            }
        }
        if(tmp>1){

            ans=ans+tmp;

        }
    return ans;
}

int main(){
    /*int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    int tmp;
    for(int i=4;i<=1000;i+=2){
            flag[i]++;
           /* tmp=i;
            ordr[i]++;
            while(tmp%2==0){
                tmp=tmp/2;
                ordr[i]+=2;
            }
    }
    for(int i=3;i<=1000;i+=2){
            ordr[i]++;
        if(!flag[i]){
            prime[in]=i; in++;
            for(int j=i+i;j<=1000;j+=i){
                flag[j]++;
               /* tmp=j;
                while(tmp%i==0){
                    tmp=tmp/i;
                    ordr[j]+=i;
                }
            }
        }
    }
    ordr[2]=3; ordr[1]=1;


    int okk; sum[1]=1;
   for(int i=2;i<=10000;i++){
        okk=funct(i,in);
        sum[okk]=i;
   }*/
    for(int i=1;i<=1000;i++){

        for(int j=i;j<=1000;j+=i){
            ordr[j]+=i;
        }
    }



    for(int i=1;i<=1000;i++){
        sum[ordr[i]]=i;
    }

    int n,cs=1;
    while(cin>>n){
        if(n==0) break;
       if(!sum[n]){
        printf("Case %d: -1\n",cs);
       }
       else{
        printf("Case %d: %d\n",cs,sum[n]);
       }
       cs++;
    }
}


