#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,len,n,tmp,l,c;
    string s,ans;
    cin>>t;
    cin.ignore();
    for(int k=1;k<=t;k++){
        getline(cin,s);
        len=s.size();
        ans.clear();
        for(int i=0,j=0;i<len;){
            j=i+1;l=1; tmp=0;
            n=s[i];
            while(s[j]>='0'&&s[j]<='9'&&j<len)j++;
            i=j; j--;
            while(s[j]>='0'&&s[j]<='9'){
                c=s[j]-'0';
                tmp=tmp+c*l;
                l=l*10;
                j--;
            }
            for(int j=0;j<tmp;j++) ans.push_back(n);
        }
        cout<<"Case "<<k<<": "<<ans<<endl;
        s.clear();
    }
}
