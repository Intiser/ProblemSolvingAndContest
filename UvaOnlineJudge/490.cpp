#include<stdio.h>
#include<iostream>

using namespace std;

string s[200];
int mxm,len;

void fit(int n){
    for(int i=0;i<n;i++){
        len = s[i].size();
        while(len<mxm){
            s[i].push_back(' ');
            len++;
        }
    }
}

void output(int n){
    char c;
    for(int i=0;i<mxm;i++){
        for(int j=n-1;j>=0;j--){
            c = s[j][i];
            printf("%c",c);
        }
        printf("\n");
    }
}

int main(){
    int in = 0;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(getline(cin,s[in])){
        len = s[in].size();
        if(mxm<len) mxm = len;
        in++;
    }
    fit(in);
    output(in);
}
