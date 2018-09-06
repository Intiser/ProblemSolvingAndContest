#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

vector<int>g[1050];
vector<int>ans;

void clr(int n){
        for(int i=1;i<=n;i++) g[i].clear();
        ans.clear();
}

void print(){
    cout<<ans[0];
    for(int i=1;i<ans.size();i++) cout<<" "<<ans[i];
    cout<<endl;
}

int main(){
    int t;
    int n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        int mn = n;
        for(int i=1;i<=n;i++){
            getline(cin,s);
            int len = s.size();
            int cnt = 0;
            for(int j=0;j<len;j++){
                if(s[j]>='0'&&s[j]<='9')
                cnt = cnt * 10 + s[j];
                else{
                    g[i].push_back(cnt);
                    cnt = 0;
                }
            }
            if(cnt) {
                g[i].push_back(cnt);
                cnt = 0;
            }
            int ret = g[i].size();
            if(ret<mn) mn = ret;
        }
        for(int i=1;i<=n;i++){
            if(g[i].size()==mn) ans.push_back(i);
        }
        print();
        clr(n);
    }
}
