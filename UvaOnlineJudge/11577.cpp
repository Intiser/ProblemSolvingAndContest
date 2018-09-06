#include<iostream>
#include<stdio.h>

using namespace std;

int arr[30];

int main(){
    int t,len,c,maxm;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        len=s.size();
        maxm=0;
        for(int i=0;i<len;i++){
            if(s[i]>='A'&&s[i]<='Z'){
                c=s[i]-'A';
                arr[c]++;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                c=s[i]-'a';
                arr[c]++;
            }
            if(maxm<arr[c]) maxm=arr[c];
        }
        for(int i=0;i<28;i++){
            if(arr[i]==maxm) printf("%c",i+97);
            arr[i]=0;
        }
        printf("\n");

    }
}
