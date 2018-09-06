#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli minm(lli a,lli b){
    if(a>b) return b;
    return a;
}

int arr[1000];

int main(){
     int n,m;
     int a;
     lli tot;
     while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        tot = 0;
        int s,e;
        for(int i=0;i<m;i++){
            cin>>s>>e;
            lli tp = 0;
            for(int j=s;j<=e;j++){
                tp = tp + arr[j];
            }
            if(tp>0) tot = tot + tp;
        }
        cout<<tot<<endl;
     }
}

