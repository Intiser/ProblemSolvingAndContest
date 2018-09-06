#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>

using namespace std;

map<string,int>ind;
vector<string>strs;

bool check(string s){
    int len = s.size();
    string t;
    for(int st=1;st<len;st++){
        //for(int i=0;i<len-st+1;i++){
            t = s.substr(0,st);
            //cout<<t<<" "<<ind[t]<<endl;
            if(ind[t]==1) return 0;
        //}
    }
    return 1;
}

int main(){
    int cas = 1;
    string s;
    while(cin>>s){
        strs.clear();
        ind.clear();
        strs.push_back(s);
        ind[s] = 1;
        int fl = 0;
        while(cin>>s){
            if(s=="9") break;
            strs.push_back(s);
            if(ind[s]==1) fl = 1;
            ind[s] = 1;
        }
        if(fl==0){
            int siz = strs.size();
            for(int i=0;i<siz;i++){
                if(check(strs[i])==0) fl = 1;
            }
            if(fl==0){
                cout<<"Set "<<cas<<" is immediately decodable"<<endl;
            }
            else{
                cout<<"Set "<<cas<<" is not immediately decodable"<<endl;
            }
        }
        else{
            cout<<"Set "<<cas<<" is not immediately decodable"<<endl;
        }
        cas++;

    }
}
