#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    int one = 0;
    int two = 0;
    cin>>n;
    int a,b;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(a>b){
            one++;
        }
        else if(b>a){
            two++;
        }
    }
    if(one>two){
        cout<<"Mishka"<<endl;
    }
    else if(two >one){
        cout<<"Chris"<<endl;
    }
    else{
        cout<<"Friendship is magic!^^"<<endl;
    }

}
