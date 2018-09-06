#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main(){
    int t,n,a,b,ans,x1,x2;
    string s1,s2;
    cin>>t;
    for(int cas = 1; cas<=t ; cas++){
        cin>>n>>s1>>s2;
        ans = 0;
        for(int i=0;i<n;i++){
            a = s1[i] - '0';
            b = s2[i] - '0';
            if(a>b){
                x1 = a-b;
                x2 = 10-a  + b;
            }
            else{
                x1 = b-a;
                x2 = 10-b  + a;
            }
            ans = ans + min(x1,x2);
        }
        cout<<"Case "<<cas<<": "<<ans<<endl;
    }
}
