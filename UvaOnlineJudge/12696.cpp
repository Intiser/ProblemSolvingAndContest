#include<iostream>
#include<stdio.h>

using namespace std;

double eps = 0.00000001;

int main(){
    int t;
    double a,b,c,tot,kg;
    int cnt = 0;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>kg;
        tot = a+b+c;
        if(((a<=56&&b<=45&&c<=25)||(tot <= 125)) && kg <= 7){
            cout<<"1"<<endl;
            cnt++;
        }
        else
            cout<<"0"<<endl;
    }
    cout<<cnt<<endl;
}
