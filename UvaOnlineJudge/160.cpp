#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];
int frq[200];
int cnt;

void funct(int n,int len){
    //if(flag[n]) return ;
    int tmp=n;
    for(int i=0;i<len&&tmp>1;i++){
        if(tmp%prime[i]==0){
            while(tmp%prime[i]==0)
            {
                frq[prime[i]]++;
                tmp=tmp/prime[i];
                //cout<<tmp<<endl;
            }
        }
    }
    if(tmp>1){
        frq[tmp]++;
    }
    return ;
}

int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=1000;i+=2) flag[i]++;
    for(int i=3;i<=1000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<100000;j+=i)
        flag[j]++;
        }
    }
    int n,nt;
    while(cin>>n){
            if(n==0) break;

        cnt=0;
        for(int i=1;i<=n;i++){
            funct(i,in);
            if(!flag[i]) cnt++;
        }
        printf("%3d! =",n);
        nt=0;
        for(int i=1;i<200;i++){
             if(cnt==1&&frq[i]){
                printf("%3d\n",frq[i]);
                cnt--;
             }
             else if(frq[i]){
                printf("%3d",frq[i]);
                cnt--; nt++;
             }
            if(nt==15){ printf("\n%6c",' ');
             nt=0;
            }

             frq[i]=0;
        }

    }
}

