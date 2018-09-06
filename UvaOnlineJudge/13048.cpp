#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;


int main(){
    string s;
    int t;
    cin>>t;
    for(int c=1;c<=t;c++){
        cin>>s;
        int cnt = 0;
        int len = s.size();
        for(int j=0;j<len;j++){
            if(s[j]=='-'){
                if(s[j+1]!='B'&&s[j+2]!='B'&&s[j+1]!='S'&&s[j-1]!='S'){
                    cnt++;
                }
            }
        }
        printf("Case %d: %d\n",c,cnt);
    }
}
