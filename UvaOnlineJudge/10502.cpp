#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int m,n,tot,p,q;
    string s[105];
    while(cin>>n){
        if(n==0) break;
        cin>>m;
        //cin.ignore();
        //cout<<"ok"<<endl;
        for(int i=0;i<n;i++) cin>>s[i];
        tot=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(s[i][j]=='1'){
                 tot++;
                 p=j+1; q=i+1;
                 while(s[i][p]=='1'&&p<m){
                    tot++;
                    p++;
                 }
                 while(s[q][j]=='1'&&q<n){
                    tot++;
                    q++;
                 }

                }
            }
            cout<<tot<<endl;
        }
         cout<<tot<<endl;
         for(int i=0;i<105;i++) s[i].clear();
    }
}
