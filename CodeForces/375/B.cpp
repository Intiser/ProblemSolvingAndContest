#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int main(){

    int in = 0;
    int d1;
    int d2;
    int mn;
    int tot = 0;
    int n;
    int a;
    int fl = 0;
    cin>>n;
    tot = 0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==0){
            if(tot%2==1) fl = 1;
            tot = 0;
        }
        else{
            tot = tot + a;
        }
    }
    if(tot%2==1) fl = 1;
    if(fl==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

}
