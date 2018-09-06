#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli fctrl[25];
char c[100];
int flag[100];

void fct(){
    fctrl[0] = 1;
    for(int i=1;i<21;i++){
            fctrl[i] = fctrl[i-1]*i;
    }
}

void clr(int n){
    for(int i=0;i<=n;i++){
        c[i] = 0;
        flag[i] = 0;
    }
}

void ins(int pos,char ch,int l){
    int cnt = 0,i=0;
    while(pos!=cnt||flag[i]){
        if(!flag[i]) cnt++;
        i++;
    }
    c[i] = ch;
    flag[i] = 1;
}

int main(){
    fct();
    lli t,p,n,tmp,m;
    string s,ans;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>s>>n;
        int len = s.size();
        p = len; tmp = n-1;
        //cout<<s<<" "<<p<<endl;
        clr(len);
        //cout<<s<<" "<<p<<endl;
        for(int i=0;i<len;i++,p--){
            m = tmp / fctrl[p-1];
            tmp = tmp - m*fctrl[p-1];
            ins(m,s[0],len);
              //cout<<m<<" "<<s[0]<<endl;

            s = s.substr(1,p-1);
            //cout<<s<<endl;
        }
        //m = tmp / fctrl[p-1];
        //tmp = tmp - m*fctrl[p-1];
        //c[m] = s[0];
        ans.clear();
        cout<<"Case "<<cas<<": ";
        for(int i=0;i<len;i++) cout<<c[i];
        cout<<endl;
        //cout<<ans<<endl;
    }
}
