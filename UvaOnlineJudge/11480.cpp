#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli mn(lli x){
    if(x%2==0) return x/2 - 1;
    return x/2;
}

lli fnct(lli t){
    lli tmp,ans=0,x;
    x = mn(t-1);
    tmp = x - 1;
   // cout<<" # "<<x<<endl;
    for(int i = 2;(i-1)<x;i++){
        ans = ans + tmp;
        x = mn(t-i);
        tmp = x - i;
        //cout<<" # "<<x<<endl;
    }
    return ans;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli n,m,ans,cas = 1;
    while(cin>>n){
            if(n==0) break;
        ans = fnct(n);
        cout<<"Case "<<cas<<": "<<ans<<endl;
        cas++;
    }
}
