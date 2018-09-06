#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,n,tmp,k,flag=0,c;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        tmp=n;
        flag=0;
        while(tmp!=1){
                k=0;
            while(tmp/10){
                c=tmp%10;
                tmp=tmp/10;
                k+=c*c;
            }
            c=tmp%10;
            k+=c*c;
            tmp=k;
            if(tmp==n){
                flag=1;
                break;
            }
        }
        if(flag==1){
            printf("Case #%d: %d is an Unhappy number.\n",i,n);
        }
        else{
            printf("Case #%d: %d is a Happy number.\n",i,n);
        }
    }
}
