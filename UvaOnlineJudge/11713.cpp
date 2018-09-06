#include<iostream>
#include<stdio.h>

using namespace std;

bool isVowel(char c){
    if(c=='a') return 1;
    if(c=='e') return 1;
    if(c=='i') return 1;
    if(c=='o') return 1;
    if(c=='u') return 1;
    return 0;
}

int main(){
    string s,t;
    int cas;
    cin>>cas;
    while(cas--){
        cin>>s>>t;
        int l1 = s.size();
        int l2 = t.size();
        if(l1==l2){
                int flag = 0;
            for(int i=0;i<l1;i++){
                if(isVowel(s[i])==1&&isVowel(t[i])==1){
                        continue;
                }
                else if(s[i]!=t[i]){
                    flag = 1;
                }

            }
            if(flag==0) printf("Yes\n");
            else printf("No\n");
        }
        else{
            printf("No\n");
        }
    }

}
