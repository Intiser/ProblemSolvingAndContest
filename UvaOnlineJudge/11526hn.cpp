#include<iostream>
#include<stdio.h>

using namespace std;

int funct(int n){
    int cnt = 0;
    for(int i=1;i<=n;i++){
        cnt = cnt + n/i;
    }
    return cnt;
}

int main(){
    int n;
    while(cin>>n){
        cout<<funct(n)<<endl;
    }
}
