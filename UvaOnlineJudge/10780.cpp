#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli funct(lli m,lli n){
    lli cnt = 0;
    lli tmp;
    for(int i=m;i<=n;i=i+m){
        tmp = i;
        while(tmp%m==0){
            tmp = tmp/m;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli n,m,ans;
    int t;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>m>>n;
        cout<<"Case "<<cas<<":"<<endl;
        ans = funct(m,n);
        if(ans)
            cout<<ans<<endl;
        else
            cout<<"Impossible to divide"<<endl;
    }
}
