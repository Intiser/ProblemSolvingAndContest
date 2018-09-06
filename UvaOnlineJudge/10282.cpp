#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

map<string,string> dict;

int main(){
    string s,a,b;
    int f = 0;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(getline(cin,s)){
        int len = s.size();
        if(len==0) break;
        f = 0;
        for(int i=0;i<len;i++){
            if(s[i]==' ') f = 1;
            else if(f==0){
                a.push_back(s[i]);
            }
            else {
                b.push_back(s[i]);
            }
        }
        dict[b] = a;
        s.clear();
        a.clear();
        b.clear();
    }
    while(cin>>s){
        if(dict[s].size()>0)
            cout<<dict[s]<<endl;
        else
            cout<<"eh"<<endl;
    }
}
