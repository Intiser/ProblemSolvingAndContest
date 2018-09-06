#include<iostream>
#include<stdio.h>
#include<map>
#include<cmath>

using namespace std;

#define lli long long int

map<lli,lli>power;
lli mx = 1;

void calculate(){
    lli t = (lli)(sqrt(mx))+1;
    lli cnt = 0;
    for(lli i=t;i>1;i--){
        cnt = 2;
        for(lli j=i*i;j<=mx;j=j*i,cnt++){
            power[j] = cnt;
        }
    }

}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    mx = mx << 32;
    //cout<<mx<<endl;
    calculate();
    lli n,ans;
    while(cin>>n){
        if(n==0) break;
        if(n<0){
            n = -n;
            ans = power[n];
            if(ans==0) ans = 1;
            while(ans%2==0&&ans>1){
                ans = ans/2;
            }
            cout<<ans<<endl;
        }
        else if(power[n]==0){
            cout<<1<<endl;
        }
        else cout<<power[n]<<endl;
    }
}
