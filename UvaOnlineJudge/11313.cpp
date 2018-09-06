#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,n,m,shw;
    cin>>t;
    while(t--){
        cin>>n>>m;
        shw=0;
        while(n/m){
            shw=shw+n/m;
            n=n/m+n%m;
        }
        if(n==1) cout<<shw<<endl;
        else cout<<"cannot do this"<<endl;

    }
}
