#include<iostream>
#include<stdio.h>

 using namespace std;

int main(){
    int t,len;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        len=s.size();
        if(s=="1"||s=="4"||s=="78"){
            printf("+\n");
        }
        else if(s[len-2]=='3'&&s[len-1]=='5'){
            printf("-\n");
        }
        else if(s[0]=='9'&&s[len-1]=='4'){
            printf("*\n");
        }
        else if(s[0]=='1'&&s[1]=='9'&&s[2]=='0'){
            printf("?\n");
        }

    }
}
