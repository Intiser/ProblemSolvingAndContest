#include<iostream>
#include<stdio.h>

using namespace std;

int palindrome(string s){
    int len = s.size();
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(s[i]!=s[j]) return 0;
    }
    return 1;
}

int main(){
     freopen("int.txt","r",stdin);
     freopen("out.txt","w",stdout);
    string s;
    int cnt = 0,p;
    while(cin>>s){
        cout<<s<<" ";
        if(palindrome(s)){
            printf("palindrome\n");
            p++;
        }
        else
            printf("not palindrome\n");
        cnt++;
        if(cnt%100==0)
        cout<<cnt<<" >>>>>>>>>>>>>>>>>>>>>>  "<<p<<endl;
    }
}
