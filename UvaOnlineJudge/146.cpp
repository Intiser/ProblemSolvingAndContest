#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

string suc(string s){
    if(next_permutation(s.begin(),s.end())){
        return s;
    }
    return "-1";
}

int main(){
    string s;
    string ans;
    while(cin>>s){
        if(s=="#") break;
        ans = suc(s);
        if(ans=="-1"){
            cout<<"No Successor"<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}
