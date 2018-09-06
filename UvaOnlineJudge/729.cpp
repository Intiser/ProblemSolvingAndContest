#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

void permute(string s){
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));
}

string crt(int n,int m){
    string t;
    for(int i=0;i<(n-m);i++) t.push_back('0');
    for(int i=0;i<m;i++) t.push_back('1');
    return t;
}

void result(int n,int m){
    string s;
    s = crt(n,m);
    permute(s);
}
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        result(n,m);
        if(t) printf("\n");
    }
}
