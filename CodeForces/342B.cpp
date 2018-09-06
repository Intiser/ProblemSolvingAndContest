#include<iostream>
#include<stdio.h>

using namespace std;

char c[10000000];

int main(){
    string s,t,tmp;
   while( cin>>s>>t){
    int l = t.size();
    int cnt = 0;
    int len = s.size();
    for(int i=0;i<len;i++){
        tmp  = s.substr(i,l);
        if(tmp==t) {
            s.replace(l+i-1,1,"#");
            cnt++;
            //s
            cout<<s<<endl;
        }
    }
    cout<<cnt<<endl;
   }
}
