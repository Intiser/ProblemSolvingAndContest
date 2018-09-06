#include<bits/stdc++.h>

using namespace std;


int main(){
    int n,len,cnt,mx,pos=0,st,fl,pt;
    string s,ans,y;
    while(cin>>n>>s){

        map<string,int> m;

        len=s.size();
        mx=0;
        ans.clear();
        y.clear();
        for(int i=0;i<len-n;i++){
             y= s.substr(i,n);
             m[y]++;
             if(mx<m[y]){
                mx=m[y];
                ans=y;
             }
        }

        cout<<ans<<endl;
    }
}
