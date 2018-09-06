#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli arr[10005];
lli arr1[10005];

void funct(lli a[],lli b[],lli t){
    for(int i=0;i<=10000;i++){
        lli cnt =0;
        for(int j=0;j*t<=i;j++){
         cnt = cnt + a[i-j*t] ;
        }
        b[i] = cnt;
    }
}

int main(){
    for(int i=0;i<=10000;i++) arr[i] = 1;
    for(int i=2;i<=21;i++){
        if(i%2==0){
            funct(arr,arr1,i*i*i);
        }
        else
            funct(arr1,arr,i*i*i);
    }
    int n;
    while(cin>>n){
        cout<<arr[n]<<endl;
    }

}
