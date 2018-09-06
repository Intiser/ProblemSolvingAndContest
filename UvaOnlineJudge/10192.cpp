#include<iostream>
#include<stdio.h>

using namespace std;

string s;
string t;
int arr[150][150];
int flag[150];

int dp(){
    for(int i=0;i<150;i++) flag[i] = 0;
    int l1 = s.size();
    int l2 = t.size();
    for(int i=0;i<=l1;i++) arr[i][0] = 0;
    for(int i=0;i<=l2;i++) arr[0][i] = 0;
    for(int i=1;i<=l1;i++){
        for(int j=1;j<=l2;j++){
            int mx = max(arr[i-1][j],arr[i][j-1]);
            if(s[i-1]==t[j-1]){
                //int add = 0;
                //flag[s[i-1]]++;
                //if(flag[s[i-1]]==1) add = 1;
                arr[i][j] = max(arr[i-1][j-1]+1,mx);
            }
            else{
                arr[i][j] = mx;
            }
        }
    }
    return arr[l1][l2];
}

int main(){
    int cas = 1;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(getline(cin,s)){
       if(s=="#") break;
        getline(cin,t);
        int ans = dp();
        cout<<"Case #"<<cas<<": you can visit at most "<<ans<<" cities."<<endl;
        cas++;
    }
}
