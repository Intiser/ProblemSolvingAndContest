#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

long long int arr[200010];

int main(){
    long long int n,tot;
    while(cin>>n){
        tot=0;
        for(int i=0;i<n;i++){
            scanf("%I64d",&arr[i]);
            if(i==0) tot=abs(arr[i]);
            else{
                tot+=abs(arr[i]-arr[i-1]);
            }
        }
        cout<<tot<<endl;
    }
}
