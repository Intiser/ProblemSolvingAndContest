#include<iostream>
#include<stdio.h>

using namespace std;

int comb(int n,int m){
    int r,result=1,cnt=1;
    r=n-m;
    if(r<m) r=m;
    for(int i=r+1;i<=n;i++){
        result=(result*i)/cnt;
        cnt++;
    }
    return result;
}

int main(){
    int p,q,r,s;
    double res;
    while(cin>>p>>q>>r>>s){
        res=comb(p,q)*1.0/comb(r,s);
        printf("%.5llf\n",res);
    }
}
