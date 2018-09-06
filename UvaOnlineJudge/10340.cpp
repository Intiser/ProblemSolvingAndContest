#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s,t;
    while(cin>>s>>t){
        int len = t.size();
        int l = s.size();
        int st = 0;
        int cnt = 0;
        for(int i=0;i<l;i++){
            while(s[i]!=t[st]&&st<len){
                st++;
            }
            if(st==len) break;
            if(s[i]==t[st]){
                cnt++;
                st++;
            }
            if(cnt==len) break;
        }
        if(cnt==l){
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
}
