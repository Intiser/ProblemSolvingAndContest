#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s[1050];
    string t;
    int cs;
    int n;
    cin>>cs;
    cin.ignore();
    for(int cas=1;cas<=cs;cas++){
        cin>>n;
            for(int i=0;i<n;i++)
            cin>>s[i];
        cin>>t;
        int len = t.size();
        int cnt = 0;
        int d=0;
        cout<<"Case "<<cas<<":"<<endl;
        for(int i=0;i<n;i++){
            d = 0;
            for(int j=0;j<len;j++){
                if(s[i][j]!=t[j]) d++;
            }
            if(d<=1){
                cout<<s[i]<<endl;
            }
        }
    }
}
