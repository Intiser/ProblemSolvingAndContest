#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
#include<vector>

using namespace std;

map<string,int> mp;
vector<string> num;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    while(cin>>s){
        if(!mp[s]) num.push_back(s);
        mp[s]++;
    }
    int l = num.size();
    for(int i=0;i<l;i++){
       cout<<num[i]<<" "<<mp[num[i]]<<endl;
    }
}
