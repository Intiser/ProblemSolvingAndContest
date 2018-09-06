#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int n,p,tmp,ans,len;
    while(cin>>n){
        if(n==0) break;
        if(n==1) ans=1;
        else{
            p=floor(log(n*1.0)/log(2.0));
            tmp=pow(2,p);
            if(tmp==n) ans=n;
            else{
                len=n-tmp;
                ans=len*2;
            }
        }
        cout<<ans<<endl;
    }
}
