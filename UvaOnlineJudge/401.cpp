#include<iostream>
#include<stdio.h>

using namespace std;

int palindrome(string t){
    int len=t.size();
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(t[i]!=t[j]) return 0;
    }
    return 1;
}

int mirrored(string t){
    int len=t.size();
    int ok=1;
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(t[i]=='A'&&t[j]=='A'){
            ok=1;
        }
        else if((t[i]=='E'&&t[j]=='3')||(t[i]=='3'&&t[j]=='E')){
            ok=1;
        }
        else if((t[i]=='H'&&t[j]=='H')){
            ok=1;
        }
        else if((t[i]=='I'&&t[j]=='I')){
            ok=1;
        }
        else if((t[i]=='J'&&t[j]=='L')||(t[i]=='L'&&t[j]=='J')){
            ok=1;
        }
        else if((t[i]=='M'&&t[j]=='M')){
            ok=1;
        }
        else if((t[i]=='O'&&t[j]=='O')||(t[i]=='O'&&t[j]=='0')||(t[i]=='0'&&t[j]=='O')){
            ok=1;
        }
        else if((t[i]=='T'&&t[j]=='T')){
            ok=1;
        }
        else if((t[i]=='U'&&t[j]=='U')){
            ok=1;
        }
        else if((t[i]=='V'&&t[j]=='V')){
            ok=1;
        }
        else if((t[i]=='W'&&t[j]=='W')){
            ok=1;
        }
        else if((t[i]=='X'&&t[j]=='X')){
            ok=1;
        }
        else if((t[i]=='Y'&&t[j]=='Y')){
            ok=1;
        }
        else if((t[i]=='Z'&&t[j]=='5')||(t[i]=='5'&&t[j]=='Z')){
            ok=1;
        }
        else if((t[i]=='1'&&t[j]=='1')){
            ok=1;
        }
        else if((t[i]=='2'&&t[j]=='S')||(t[i]=='S'&&t[j]=='2')){
            ok=1;
        }
        else if((t[i]=='8'&&t[j]=='8')){
            ok=1;
        }
        else
            return 0;
    }
    return 1;
}

int main(){
    string s;
    int pali,mirr;
    while(cin>>s){
        pali=palindrome(s);
        mirr=mirrored(s);
        if(pali==1&&mirr==1){
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }
        else if(pali==1&&mirr==0){
            cout<<s<<" -- is a regular palindrome."<<endl;
        }
        else if(pali==0&&mirr==1){
            cout<<s<<" -- is a mirrored string."<<endl;
        }
        else {
            cout<<s<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
}
