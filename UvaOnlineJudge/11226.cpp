#include<iostream>
#include<stdio.h>

using namespace std;

int flag[500005];
int prime[500005];
int sop[500005];
int lsop[500005];

int lesop(int n){
    if(!flag[n])
        return 1;
    if(lsop[n])
        return lsop[n];
    if(sop[n]==n)
        return 1;

    int t;
    t=sop[n];
    lsop[n]=lesop(t)+1;
    return lsop[n];
}


int main(){
    int in=1,tmp,temp,cnt; sop [2]=2;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=500000;i+=2) {
            flag[i]++;
            tmp=i; cnt=0;
            while(tmp%2==0){
                tmp=tmp/2;
                cnt+=2;
            }
            sop[i]+=cnt;

    }

    for(int i=3;i<=500000;i+=2){
        if(!flag[i]){
            prime[in]=i; in++;
            sop[i]=i;
            for(int j=i+i;j<=500000;j+=i){
                flag[j]++;
                tmp=j; cnt=0;
                while(tmp%i==0){
                    tmp=tmp/i;
                    cnt+=i;
                }
                sop[j]+=cnt;
            }
        }
    }
    for(int i=2;i<=500000;i++){
        lsop[i]=lesop(i);
        //cout<<lsop[i]<<endl;
    }
    //cout<<prime[0]<<endl;
    int t,n,maxm,a,b,sm,bg;
    /*while(cin>>n){
            //cout<<lsop[n]<<endl;

    }*/
    cin>>t;
    for(int k=1;k<=t;k++){
        cin>>a>>b;
        if(a<b){
            sm=a;
            bg=b;
        }
        else{
            sm=b;
            bg=a;
        }
        maxm=0;
        for(int l=sm;l<=bg;l++){
            if(maxm<lsop[l]){
                maxm=lsop[l];
            }
        }
        printf("Case #%d:\n%d\n",k,maxm);
    }
}

