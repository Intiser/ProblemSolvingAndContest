#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s;
    string ans;
    int len,c;
    while(getline(cin,s)){
        len=s.size();
        ans.clear();
        for(int i=0;i<len;i++){
            if(s[i]=='1'||s[i]=='0'||s[i]=='-'){
                ans.push_back(s[i]);
            }
            else if(s[i]=='A'||s[i]=='B'||s[i]=='C'){
                ans.push_back('2');
            }
            else if(s[i]=='D'||s[i]=='E'||s[i]=='F'){
                ans.push_back('3');
            }
            else if(s[i]=='G'||s[i]=='H'||s[i]=='I'){
                ans.push_back('4');
            }
            else if(s[i]=='J'||s[i]=='K'||s[i]=='L'){
                ans.push_back('5');
            }
            else if(s[i]=='M'||s[i]=='N'||s[i]=='O'){
                ans.push_back('6');
            }
            else if(s[i]=='P'||s[i]=='Q'||s[i]=='R'||s[i]=='S'){
                ans.push_back('7');
            }
            else if(s[i]=='T'||s[i]=='U'||s[i]=='V'){
                ans.push_back('8');
            }
            else if(s[i]=='W'||s[i]=='X'||s[i]=='Y'||s[i]=='Z'){
                ans.push_back('9');
            }
        }
        cout<<ans<<endl;
        s.clear();
    }
}
