#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s;
    int len;
    int cas;
    cin>>cas;
    cin.ignore();
    while(cas--){
        getline(cin,s);
        len=s.size();
        int a=0,fl=0, m=len/2;
        for(int i=0;i<len;i++){
            if(s[i]=='('||s[i]=='['){
                    a++;
            }
            else if(s[i]==')'||s[i]==']'){
                    a--;
            }
            if(a<0||a>m){
                fl=1;
                break;
            }
        }
        if(fl==1){
             cout<<"No"<<endl;
        }
        else if(a){
            cout<<"No"<<endl;
        }
        else
            cout<<"Yes"<<endl;
    }
}
