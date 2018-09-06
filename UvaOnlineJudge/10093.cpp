#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string s;
    long long int tmp,len,n,maxm,fl=0;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    while(getline(cin,s)){
        len=s.size();
        tmp=0; maxm=0;
        for(int i=0;i<len;i++){
            if(s[i]>='0'&&s[i]<='9'){
                n=(s[i]-'0');
                tmp+=n;
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                n=(s[i]-'A'+10);
                tmp+=n;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                n=(s[i]-'a'+36);
                tmp+=n;
            }

            if(maxm<n){
                maxm=n;
            }
        }
        fl=0;

        for(int i=2;i<=62;i++){
            if(i>maxm)
            if(tmp%(i-1)==0){
                cout<<i<<endl;
                fl=1;
                break;
            }

            if(fl==1) break;
        }
        if(fl==0){
            printf("such number is impossible!\n");
        }

        s.clear();

    }
}
