#include<iostream>
#include<stdio.h>

using namespace std;

int check(string s,string t){
    int len = s.size();
    int l = t.size();
    string tp;
    for(int i=0;i+l<=len;i++){
        tp = s.substr(i,l);
        if(tp == t) return 1;
    }
    return 0;
}

int main(){
    int t;
    string mn;
    int q,ans;
    string cmp,tmp;
    cin>>t;
    while(t--){
        cin>>mn;
        cin>>q;
        for(int i = 0; i<q ; i++ ){
                cin>>tmp;
                ans = check(mn,tmp);
                if(ans==1){
                    printf("y\n");
                }
                else
                    printf("n\n");
        }
    }
}
