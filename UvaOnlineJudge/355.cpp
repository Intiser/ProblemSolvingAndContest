#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli long long int

char retCh(int n){
    if(n<=9) return n + '0' ;
    return 'A' + (n-10);
}

lli retInt(char c){
    if(c>='0'&&c<='9') return c - '0';
    return c - 'A' + 10;
}

lli retDec(string s,int base){
    int siz = s.size();
    lli tot = 0;
    for(int i=0;i<siz;i++){
        tot = tot*base + retInt(s[i]);
    }
    return tot;
}

string retVal(lli val,int base){
    string ret;
    while(val/base){
        ret.push_back(retCh(val%base));
        val = val/base;
    }
    ret.push_back(retCh(val%base));
    reverse(ret.begin(),ret.end());
    return ret;
}

bool isIT(char c,int base){
    int n;
    if(c>='0'&&c<='9') n = c - '0';
    else{
        n = c - 'A' + 10;
    }
    if(n<base) return true;
    return false;
}

bool check(string s,int base){
    int siz = s.size();
    for(int i=0;i<siz;i++){
        if(isIT(s[i],base)==false) return false;
    }
    return true;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int b1,b2;
    string s;
    lli val;
    string ans;
    while(cin>>b1>>b2>>s){
        if(check(s,b1)==false){
            cout<<s<<" is an illegal base "<<b1<<" number"<<endl;
            continue;
        }
        val = retDec(s,b1);
        //cout<<val<<endl;
        ans = retVal(val,b2);
        cout<<s<<" base "<<b1<<" = "<<ans<<" base "<<b2<<endl;
    }
}
