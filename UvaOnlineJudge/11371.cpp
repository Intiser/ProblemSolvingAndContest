#include<iostream>
#include<stdio.h>

using namespace std;

int arr[1000];

int main(){
    long long int n,k,bg,sm,pow,in=0,tmp,res;
    while(cin>>n){
        in=0;
        tmp=n;
        pow=1;
        while(tmp/10){
            arr[in]=tmp%10;
            tmp=tmp/10;
            in++;
            pow*=10;
        }
        arr[in]=tmp%10;
        in++;
        k=0;
        for(int i=0;i<in;i++){
            k=k+arr[i]*pow;
            pow=pow/10;
        }
        if(n>k) {
            bg=n;
            sm=k;
        }
        else{
            bg=k;
            sm=n;
        }
        res=(bg-sm)/9;
        printf("%lld - %lld = %lld = 9 * %lld\n",bg,sm,bg-sm,res);
    }
}
