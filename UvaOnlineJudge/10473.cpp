#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli long long int

char what(int n){
    if(n>=0&&n<=9) return n+'0';
    int t = n - 10;
    return 'A' + t;
}

lli what2(char c){
    if(c>='0'&& c<='9') return  c - '0';
    int t = c - 'A' + 10;
    return t;
}

string intToHex(string s){
    lli tmp = 0;
    int siz = s.size();
    for(int i=0;i<siz;i++){
        tmp = tmp*10 + (s[i]-'0');
    }
    //cout<<tmp<<endl;
    string ret;
    while(tmp/16){
        ret.push_back(what(tmp%16));
        tmp = tmp /16;
    }
    ret.push_back(what(tmp%16));
    reverse(ret.begin(),ret.end());
    return ret;
}

lli HexToInt(string s){
    lli tmp = 0;
    for(int i=0;i<s.size();i++){
        tmp = tmp *16 + what2(s[i]);
    }
    return tmp;
}


int main(){
    string s;
    while(getline(cin,s)){
        if(s[0]=='-') break;
        if(s[0]=='0'&&s[1]=='x'){
            int siz = s.size();
            cout<<HexToInt(s.substr(2,siz-2))<<endl;
        }
        else{
            cout<<"0x"<<intToHex(s)<<endl;
        }
    }
}
