#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s,rev;
    int len,c,flag;
    while(getline(cin,s)){
        if(s=="DONE") break;
        rev.clear();
        len=s.size();
        for(int i=0;i<len;i++){
            if(s[i]>='a'&&s[i]<='z'){
                c=s[i]-'a'+20;
                rev.push_back(c);
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                c=s[i]-'A'+20;
                rev.push_back(c);
            }
        }
        len=rev.size();
        flag=0;
        //cout<<len<<endl;
        for(int i=0,j=len-1;i<=j;i++,j--){
            if(rev[i]!=rev[j]) {
                //cout<<s[i]<<" "<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0) printf("You won't be eaten!\n");
        else printf("Uh oh..\n");
        rev.clear(); s.clear();
    }
}
