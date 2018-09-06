#include<iostream>
#include<stdio.h>

using namespace std;

int funct(int n){
    if(n<=9) return 1;
    int ret=funct(n/10)+1;
    return  ret;
}

int main(){
    int n,t,len,tmp,deg;
    string s;
    while(getline(cin,s)){
        if(s=="0") break;
        len=s.size();
        tmp=0;
        for(int i=0;i<len;i++){
            tmp+=(s[i]-'0');
        }
        if(tmp%9==0){
            deg=funct(tmp);
            cout<<s<<" is a multiple of 9 and has 9-degree "<<deg<<"."<<endl;
        }
        else {
            cout<<s<<" is not a multiple of 9."<<endl;
        }
        s.clear();
    }
}
