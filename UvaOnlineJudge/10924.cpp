#include<iostream>
#include<stdio.h>

using namespace std;

int flag[10000];

int main(){
    flag[1] = 1;
    flag[1] = 0;
    for(int i=4;i<=10000;i+=2) flag[i]++;
    for(int i=3;i<10000;i+=2){
        if(!flag[i]){
            for(int j=i+i;j<10000;j+=i)
                flag[j]++;
        }
    }
    string s;
    int w,tot;
    while(cin>>s){
        int len =s.size();
        tot=0;
        for(int i=0;i<len;i++){
            if(s[i]>='a'&&s[i]<='z'){
                w = (s[i]-'a'+1);
                tot = tot + w;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                w = (s[i]-'A'+1)+26;
                tot = tot + w;
            }
        }
        //cout<<tot<<endl;
        if(flag[tot]){
            cout<<"It is not a prime word."<<endl;
        }
        else{
            cout<<"It is a prime word."<<endl;
        }
    }
}
