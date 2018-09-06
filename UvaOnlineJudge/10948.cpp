#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000005];
int prime[1000005];

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
    int n,a,b,chk;
    while(cin>>n){
        if(n==0) break;
        chk=0;
        for(int i=1;i<=(n/2+1);i++){
            a=i; b=n-i;
            if(!flag[a]&&!flag[b]){
              chk=1; //cout<<"yes"<<endl;
              break;
            }
            //cout<<a<<" "<<b<<endl;
        }
        printf("%d:\n",n);
        if(chk==1){
            printf("%d+%d\n",a,b);
        }
        else{
            printf("NO WAY!\n");
        }

    }
}

