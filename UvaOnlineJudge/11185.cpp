#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli long long int

string convert(lli n){
    string ret;
    while(n/3){
        ret.push_back('0' + n%3);
        n = n/3;
    }
    ret.push_back('0' + n%3);
    reverse(ret.begin(),ret.end());
    return ret;
}


int main(){
    lli n;
    while(cin>>n){
        if(n<0) break;
        cout<<convert(n)<<endl;
    }
}
