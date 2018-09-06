#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli minm(lli a,lli b){
    if(a>b) return b;
    return a;
}
lli n,a,b,c;

int ret(int k){

}

int main(){

    while(cin>>n>>a>>b>>c){
        lli k = (4 - (n%4))%4;
        if(k==0){
            cout<<0<<endl;
        }
        else if(k==1){
            lli mn = minm(a,3*c);
            mn = minm(mn,b+c);
            cout<<mn<<endl;
        }
        else if(k==2){
            lli mn = minm(2*a,b);
            mn = minm(mn,2*c);
            cout<<mn<<endl;
        }
        else if(k==3){
            lli mn = minm(3*a,c);
            mn = minm(mn,b+a);
            cout<<mn<<endl;
        }
    }
}
