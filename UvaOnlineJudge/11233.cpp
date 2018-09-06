#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

map<string ,string> dic;
map<string ,int> ok;

bool check(string s){
    int len = s.size();
    if(s[len-1]=='o') return 1;
    if(s[len-1]=='s') return 1;
    if(s[len-2]=='c'&&s[len-1]=='h') return 1;
    if(s[len-2]=='s'&&s[len-1]=='h') return 1;
    if(s[len-1]=='x') return 1;
    return 0;

}

bool isCon(char c){
    if(c=='a') return 0;
    if(c=='e') return 0;
    if(c=='i') return 0;
    if(c=='o') return 0;
    if(c=='u') return 0;
    return 1;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,m;
    string s,t;
    while(cin>>n>>m){
        dic.clear();
        ok.clear();
        for(int i=0;i<n;i++){
            cin>>s>>t;
            dic[s] = t;
            ok[s] = 1;
        }
        for(int i=0;i<m;i++){
            cin>>s;
            int len = s.size();
            if(ok[s]==1){
                  t = dic[s];
               // cout<<dic[s]<<endl;
               // continue;
            }
            else if(isCon(s[len-2])==1&&s[len-1]=='y'){
                t = s.substr(0,len-1)+ "ies";
                //cout<<s<<endl;
               // continue;
            }
            else if(check(s)==1){
                t = s + "es";
               // cout<<s<<endl;
               // continue;
            }
            else{
                t = s +  "s";
                //cout<<s<<endl;
               // continue;
            }
            cout<<t<<endl;
        }
    }
}
