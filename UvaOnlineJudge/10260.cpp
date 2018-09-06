#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s;
    string ans;
    int pr;
    while(cin>>s){
        pr = 0;
        int len = s.size();
        ans.clear();
        for(int i=0;i<len;i++){
            if((s[i]=='B'||s[i]=='F'||s[i]=='P'|| s[i]=='V')){
                if(pr!=1)
                ans.push_back('1');
                pr = 1;
            }
            else if((s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')){
                if(pr!=2)
                ans.push_back('2');
                pr = 2;
            }
            else if((s[i]=='D'||s[i]=='T')){
                if(pr!=3)
                ans.push_back('3');
                pr = 3;
            }
            else if((s[i]=='L')){
                if(pr!=4)
                ans.push_back('4');
                pr = 4;
            }
            else if((s[i]=='M'||s[i]=='N')){
                if(pr!=5)
                ans.push_back('5');
                pr = 5;
            }
            else if((s[i]=='R')){
                if(pr!=6)
                ans.push_back('6');
                pr = 6;
            }
            else{
                pr = 0;
            }

        }
        cout<<ans<<endl;

    }
}
