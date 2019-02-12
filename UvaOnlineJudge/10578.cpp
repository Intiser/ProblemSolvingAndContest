#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int f[10];

void init(){
    for(int i=1;i<=6;i++) f[i] = 4;
}

int rec(int val){
    if(val>31) return 0;
    int r = 0;
    for(int i=1;i<=6;i++){
        if(f[i]){
            f[i]--;
            int r = rec(val + f[i]);
            f[i]++;
        }
        if(r == 1) return 1;
    }
    return 0;
}

int main(){
    string s;
    int a;
    int wpl = 0;
    while(cin>>s){
        int siz = s.size();
        init();
        int sum = 0;
        int wpl = 0;
        for(int i=0;i<siz;i++){
            a = s[i] - '0';
            f[a]--;
            sum += a;
            if(sum > 31) {
                if(i % 2 == 0) wpl = 1;
                else wpl = 2;
            }
        }
       // cout<<sum<<endl;
        int rs ;
        if(wpl == 0){
            rs =  rec(sum);
            cout<<rs<<endl;
            if(rs == 1){
                if(siz % 2 == 0) wpl = 1;
                else wpl = 2;
            }
            else {
                if(siz % 2 == 0) wpl = 2;
                else wpl = 1;
            }
        }
        if(wpl == 1){
            cout<<s<<" "<<"A"<<endl;
        }
        else {
            cout<<s<<" "<<"B"<<endl;
        }

    }
}
