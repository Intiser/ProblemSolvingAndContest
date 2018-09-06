#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int A,B,res;
    while(cin>>A>>B){
        res = max(A,B);
        cout<<res<<endl;
    }
}
