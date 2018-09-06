#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

map<string ,int> mp;
vector<string> lists;
vector<string> lists2;

int check(int n){
    for(int i=0;i<n;i++){
        if(mp[lists[i]]!=0||mp[lists2[i]]!=0) return 0;
    }
    return 1;
}

void clr(int n){
    for(int i=0;i<n;i++){
        mp[lists[i]]=0;
        mp[lists2[i]]=0;
    }
    lists.clear();
    lists2.clear();
}

int main(){
    int n,ans;
    string a,b;
    while(cin>>n){
        if(n==0) break;
        for(int i=0;i<n;i++){
            cin>>a>>b;
            mp[b]--;
            mp[a]++;
            lists.push_back(a);
            lists2.push_back(b);
        }
        ans = check(n);
        if(ans == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        clr(n);
    }
}
