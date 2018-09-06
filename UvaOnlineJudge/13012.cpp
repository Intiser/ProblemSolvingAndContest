#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,cnt;
    int a,b,c,d,e;
    while(cin>>n){
        cnt=0;
        cin>>a>>b>>c>>d>>e;
        if(a==n) cnt++;
        if(b==n) cnt++;
        if(c==n) cnt++;
        if(d==n) cnt++;
        if(e==n) cnt++;
        cout<<cnt<<endl;
    }
}
