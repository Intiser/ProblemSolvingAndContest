#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int flag[1000010];
int prime[1000000];
int frq[1000001];

int main(){
    int in=1;
    flag[0]=1; flag[1]=0; prime[0]=2;
    for(int i=4;i<=1000000;i+=2) flag[i]++;
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
            prime[in]=i;
            in++;
            for(int j=i+i;j<=1000000;j+=i){
               flag[j]++;
            }
        }
    }
    int t,L,U,cnt,st,fcn,maxm,ans,flag,fl;
    cin>>t;
    while(t--){
        cin>>L>>U;

        for(int i=0,fl=0;fl==0&&i<in;i++){
            while(prime[i]>=L&&prime[i]<=U&&i<in){
                i++; fl=1;
                if(prime[i]>U||i==in) break;
                frq[prime[i]-prime[i-1]]++;
            }
        }
        maxm=0; ans=0; flag=0; cnt=0;
        for(int k=0;k<100000;k++){
             if(maxm<frq[k]){
                maxm=frq[k];
                ans=k;
            }
            if(frq[k]!=0) cnt++;

        }
        flag=0;
        for(int k=0;k<100000;k++){
              if(maxm==frq[k])
                flag++;
                 frq[k]=0;
        }

        if(flag>1||cnt==0){
            printf("No jumping champion\n");
        }
        else{
             printf("The jumping champion is %d\n",ans);
        }


    }
}
