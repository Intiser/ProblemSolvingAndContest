#include<iostream>
#include<stdio.h>

using namespace std;

int cont[10500];
int flag[10500];

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cont[s[i]]++;
        if(cont[s[i]]==1) cnt++;
    }
    int st = 0;
    int now = 0;
    int mn = n;
    for(int i=0;i<n;i++){
        flag[s[i]]++;
        if(flag[s[i]]==1){
            now++;
        }
        while(now == cnt){
            if(mn>(i-st+1)) mn = i - st+1 ;
            flag[s[st]]--;
            if(flag[s[st]]==0) now--;
            st++;
        }
    }
    cout<<mn<<endl;
}
