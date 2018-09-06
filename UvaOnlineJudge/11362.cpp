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
    int t;
    int n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        strs.clear();
        ind.clear();
        for(int i=0;i<n;i++){
            cin>>s;
            ind[s] = 1;
            strs.push_back(s);
        }
        int chck = 0;
        for(int i=0;i<n;i++){
            if(check(strs[i])==0){
                chck = 1;
                break;
            }
        }
        if(chck==1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }

    }
}
