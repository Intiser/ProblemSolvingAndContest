#include<iostream>
#include<stdio.h>

using namespace std;

int flg[20000100];
int prime[20000100];
int twin[20000100];

int main(){
    int in=1,l=1;
    flg[1]=1;
    flg[0]=1;
    for(int i=4;i<=20000000;i+=2) flg[i]++;
    prime[0]=2;
    for(int i=3;i<=20000000;i+=2){
        if(!flg[i]){
           // prime[in]=i;
          // cout<<i<<endl;
            in++;
            if(!flg[i-2]) {twin[l]=i; l++;
             //printf("(%d, %d)\n",i,i-2);
            }

            for(int j=i+i;j<=20000000;j+=i){
                flg[j]++;
            }
        }
    }
    //cout<<in<<endl;
    int n,a,b;
    while(cin>>n){
        a=twin[n]-2;
        b=twin[n];
        printf("(%d, %d)\n",a,b);
    }

}
