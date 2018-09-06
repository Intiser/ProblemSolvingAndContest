#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,len,p,t;
    string str;
    string ans;
    while(cin>>n){
        if(n==0) break;
        cin.ignore();
        cin>>str;
        len=str.size();
        //cout<<len<<endl;
        p=len/n;
        for(int i=1;i<=n;i++){
            for(int j=i*p-1;j>=((i-1)*p);j--){
                t=str[j];
                ans.push_back(t);
            }
        }
        cout<<ans<<endl;
        ans.clear();
    }
}
