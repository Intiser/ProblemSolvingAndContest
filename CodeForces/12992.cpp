#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,n;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>n;
        cout<<"Case #"<<cas<<": "<<n*2 - 1<<endl;
    }
}
