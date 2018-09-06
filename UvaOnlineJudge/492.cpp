#include<iostream>
#include<stdio.h>
#include<string>
#include<ctype.h>

using namespace std;

int vowel(char c){
    if((c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
        return 1;

    return 0;
}

int main(){
    string s,ans;
    int len,fl,vw,c;
    /*while(getline(cin,s)){
        len=s.size();
        ans.clear();
        vw=0; fl=0;
        for(int i=0;i<len;i++){
            if(s[i]==' '||s[i]=='.'){
                if(vw==1&&fl==1) {
                   ans.push_back('a');
                   ans.push_back('y');
                }
                else if(fl==1&&vw==0){
                    ans.push_back(c);
                    ans.push_back('a');
                    ans.push_back('y');
                }
                fl=0; vw=0;
                ans.push_back(s[i]);
            }
            else if(fl==0&&(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')){
                fl=1; vw=1;
                ans.push_back(s[i]);
            }
            else if(fl==0&&(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U')&&((s[i]>='A'&&s[i]<='z')||(s[i]>='a'&&s[i]<='z'))){
                fl=1; vw=0;
                c=s[i];
            }
            else{
                 ans.push_back(s[i]);
            }

        }
        if(fl==1){
                if(vw==1&&fl==1) {
                   ans.push_back('a');
                   ans.push_back('y');
                }
                else if(fl==1&&vw==0){
                    ans.push_back(c);
                    ans.push_back('a');
                    ans.push_back('y');
                }
        }
        cout<<ans<<endl;
        s.clear();
    }*/
    while(getline(cin,s)){
        len=s.size();
        //ans.clear();
        int i=0;
        while(i<len){
            if(vowel(s[i])){

                    while(isalpha(s[i])){
                     cout<<s[i]; i++;
                    }
                     cout<<"ay";
            }
            else if(isalpha(s[i])){
                    c=s[i]; i++;
                while(isalpha(s[i])){
                     cout<<s[i]; i++;
                    }
                    cout<<(char)c<<"ay";

            }

           cout<<s[i]; i++;


        }
        cout<<endl;
    }
}
