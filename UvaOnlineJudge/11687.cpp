#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int result(string s,int len,int n){
    if(s=="1"&&n==1) return n;
    if(len==1) return n+1;
    int cnt = len;
    string t = "";
    while(cnt/10){
        t.push_back(cnt%10);
        cnt = cnt/10;
    }
    t.push_back(cnt%10);

    int l = t.size();
    return result(t,l,n+1);
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    while(cin>>s){
            if(s=="END") break;

        cout<<result(s,s.size(),1)<<endl;
    }
}
