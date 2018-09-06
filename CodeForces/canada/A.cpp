#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int rg = 0;
    int lf = 0;
    int cnt = 0;
    int add = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='<'){
            if(rg==0) cnt++;
            else add = 0;

        }
        else if(s[i]=='>'){
            rg = 1;
            add++;
        }
    }
    cnt = cnt + add;
    cout<<cnt<<endl;

}
