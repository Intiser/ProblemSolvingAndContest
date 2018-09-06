#include<iostream>
#include<stdio.h>

using namespace std;

int arr[1000000];

int main(){
    arr[1]=1; arr[2]=2;
    for(int i=3;arr[i-1]<=1000000000;i++){
        arr[i]=arr[i-1]+arr[i-2];
        //cout<<arr[i]<<endl;
    }
    int pos,tmp;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n){
        tmp=n; pos;
        for(int i=1;arr[i]<=n;i++){
            pos=i;
        }
        printf("%d = ",n);
        for(int i=pos;i>=1;i--){
            if(tmp-arr[i]>=0){
                tmp=tmp-arr[i];
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf(" (fib)\n");
        }
        else{
            printf("0 = 0 (fib)\n");
        }
    }
}
