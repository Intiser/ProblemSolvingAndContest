#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int t,a,b,tot;
    cin>>t;
    while(t--){
        cin>>a>>b;
        tot = (a*(a-1))/2;

        if(b == a+1){
            tot = tot + a;
        }
        else if(b!=a){
            tot = tot + (a*(b-a));
        }
        cout<<tot<<endl;
    }
}
