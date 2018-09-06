#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

#define lli long long int
#define modx 1000000007

map<lli,lli> val;

lli modpow(lli x,lli p){
    if(p==0) return 1;
    if(p==1) return x%modx;
    if(val[p]>0) return val[p];
    lli y2 = p%x;
    lli y1 = p/x;
    lli res1 = modpow(x,y1) % modx;
    lli res2 = modpow(x,y2) % modx;
    lli res  = ((res1)*(res1))%modx;
    res = (res * res2)% modx;
    val[p] = res;
    return res;

}

lli total(lli x,lli p,lli n){
    lli res = modpow(x,p)%modx;
    lli tot = n%modx;
    tot = (tot * res) %modx;
    return tot;
}

int main(){
    int t;
    cin>>t;
    lli n,ans;
    for(int cas=1;cas<=t;cas++){
        cin>>n;
        ans = total(2,n-1,n);
        cout<<"Case #"<<cas<<": ";
        cout<<ans<<endl;
    }
}
