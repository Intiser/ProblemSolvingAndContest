#include<iostream>
#include<stdio.h>

using namespace std;

string s;
string t;
int arr[1005][1005];

int dp(){
    int l1 = s.size();
    int l2 = t.size();
    for(int i=0;i<l1;i++) arr[0][i] = 0;
    for(int i=0;i<l2;i++) arr[i][0] = 0;
    int mx = 0;
    for(int i=1;i<=l2;i++){
        for(int j=1;j<=l1;j++){
            mx = max(arr[i-1][j],arr[i][j-1]);
            if(t[i-1]==s[j-1]){
                arr[i][j] = max(arr[i-1][j-1]+1,mx);
            }
            else arr[i][j] = mx;
        }
    }
    return arr[l2][l1];
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(getline(cin,s)){
        getline(cin,t);
        cout<<dp()<<endl;
    }
}
