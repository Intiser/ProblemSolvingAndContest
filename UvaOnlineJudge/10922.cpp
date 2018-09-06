#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int tot,fl,tmp,cnt;
    string s;
    while(cin>>s){
        if(s=="0") break;
        int len = s.size();
        tot = 0;
        fl = 0;
        for(int i=0;i<len;i++){
            tot += s[i] - '0';
        }
        if(tot%9==0) fl = 1;
        if(fl==0){
            cout<<s<<" is not a multiple of 9."<<endl;
        }
        else{
            tmp = tot;
            cnt = 1;
            while(tot/10) {
                cnt++;
                tot =tot / 9;
               // cout<<tot<<endl;
            }
            cout<<s<<" is a multiple of 9 and has 9-degree "<<cnt<<"."<<endl;
        }
    }
}
