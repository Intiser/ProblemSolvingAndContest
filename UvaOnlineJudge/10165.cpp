#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int main(){
    lli n;
    lli a;
    while(cin>>n){
        if(n==0) break;
        lli et = 0;
        for(int i=0;i<n;i++){
            cin>>a;
            et = a ^ et;
        }
        if(et>0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
