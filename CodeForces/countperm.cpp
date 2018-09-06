#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli fc[25];
int flag[100];

void fct(){
    fc[0] = 1;
    for(int i=1;i<21;i++) fc[i] = fc[i-1]*i;
    //cout<<fc[20]<<endl;
}

int check(string s,char c){
    int len = s.size();
    int cnt = 0;
    for(int i=0;i<len;i++){
        if(!flag[i]&&s[i]!=c) cnt++;
        if(s[i]==c){
            flag[i] = 1;
            return cnt;
        }
    }
}

lli can(string in,string out){
    int l = out.size();
    int p = l-1;
    lli tot = 0;
    for(int i=0;i<l;i++,p--){
        tot = tot + check(in,out[i])*fc[p];
    }
    return tot;
}

void clr(int n){
    for(int i=0;i<=n;i++) flag[i] = 0;
}

int main(){
    freopen("out.txt","r",stdin);
    freopen("int.txt","w",stdout);
    string inti = "123456789";
    string s;
    lli hav;
    fct();
    while(cin>>s){
        hav = can(inti,s);
        int len = inti.size();
        clr(len);
        cout<<hav<<endl;
    }
}
