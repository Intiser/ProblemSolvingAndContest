#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;
#define lli long long int
map<lli,lli>m;



int main(){
    lli t,n,k,cnt=0,pr;
    cin>>t;
    while(t--){
           cin>>n>>k;
            pr = 0;
            map<lli,lli>f;
            cnt = 0;
        for(int i=1;i*k<=n;i++){
            if(f[i]!=1){
                f[i*k]=1;
                //cout<<i<<endl;
                cnt++;
                if(i*k>n/2) pr++;
            }
        }
        cnt = cnt + (n/2 - pr);
        cout<<cnt<<endl;
    }
}
