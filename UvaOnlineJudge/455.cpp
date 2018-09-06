#include<iostream>
#include<stdio.h>

using namespace std;

int repeated(string s,int l,int fns){
    int start = 0;
    string tmp,t;
    tmp = s.substr(start,l);
    t = s.substr(start,l);
   // cout<<t<<" "<<tmp<<endl;
    while(tmp==t&&start<=fns){
        if(start == fns) return 1;
        start = start + l;
        tmp = s.substr(start,l);
        // cout<<t<<" "<<tmp<<" "<<fns<<endl;
    }
    return 0;

}


int check(string s){
    int len = s.size();
    int l   = len / 2;
    int ans  = 0,m;
    for(int i=0;i<l;i++){
        m = len - (i+1);
        ans = repeated(s,i+1,m);
        if(ans==1) return i+1;
    }
    return len;
}

int main(){
    string s;
    int t,st=0,ans;
    cin>>t;
    while(t--){
        cin>>s;
        if(st==1) printf("\n");
        st = 1;
        ans = check(s);
        cout<<ans<<endl;
    }
}
