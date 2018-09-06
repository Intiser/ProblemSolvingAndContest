#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

map<int,string>index;
vector<int>divs;

string rec(string t,int p){
    if(p==1) return t;
    if(p==2) return t+t;

    string ret;
    ret = rec(t,p/2);
    ret = ret + ret;
    int p1 = p%2;
    if(p1) ret = ret + t;
    return ret;

}

void divisor(int n){
    int tmp = n;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            divs.push_back(i);
        }
    }

}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    string mk;
    int len;
    int pw;
    int chk;
    while(cin>>s){
            if(s==".") break;
        chk = 0;
        len = s.size();
        char c = s[0];
        for(int i=0;i<len;i++){
            if(c!=s[i]){
                chk = 1;
                break;
            }
        }
        if(chk==0){
            cout<<len<<endl;
        }
        else{
            divs.clear();
            divisor(len);
            int tmp = len;
            int siz = divs.size();
            int ans = 0;
            for(int i=0;i<siz;i++){
                mk = s.substr(0,divs[i]);
                string res = rec(mk,tmp/divs[i]);
               // cout<<res<<" "<<mk<<" "<<tmp/divs[i]<<endl;
                if(res==s){
                    ans = tmp/divs[i];
                    break;
                }
            }
            if(ans==0){
                    for(int i=siz-1;i>=0;i--){
                        mk = s.substr(0,tmp/divs[i]);
                        string res = rec(mk,divs[i]);
                        if(res==s){
                            ans = divs[i];
                            break;
                        }
                    }
            }
            if(ans==0) ans = 1;
            cout<<ans<<endl;
        }
    }
}
