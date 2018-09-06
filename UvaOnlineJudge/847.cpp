#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int n,p=1,r;
    while(cin>>n){
            p=1;
            r = 0;
        for(int i = 0;p<n;i++){
             if(p*9>=n){
                p = p*9;
             }
            else if(p*81<n){
               p= p*9;
            }
            else{
                p = p*2;
            }
            r = i;
        }
        if(r%2==0) cout<<"S"<<endl;
        else cout<<"O"<<endl;

    }
}
