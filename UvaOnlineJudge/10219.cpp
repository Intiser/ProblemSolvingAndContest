#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int n,k,tmp,r,cnt;
    while(cin>>n>>k){
        r=(n-k);
        if(r<k) r=k;
        cnt=1; tmp=1;
        for(long long int i=r+1;i<=n;i++){
            tmp=(tmp*i)/cnt;
            cnt++;
        }
        cout<<tmp<<endl;
    }
}
