#include<iostream>
#include<stdio.h>

using namespace std;

long long int mod(int b,int p,int m){
    if(p==0) return 1;
    //if(p==1) return b;

    long long int x=mod(b,p/2,m);
    x=(x*x)%m;
    if(p%2==1) x=(x*b)%m;
    return x;
}

int main(){
    int n,tmp,cnt,tot;
    while(cin>>n){
      if(n==0) cnt=0;
      else{
        cnt=1;
        tot=0;
        tmp=1%n;
        tot=(tot+tmp)%n;
        //cout<<tot<<endl;
        for(int i=1;tot;i++){
            tmp=mod(10,i,n);
            tot=(tot+tmp)%n;
            cnt++;
           // cout<<tot<<endl;
        }
      }
        cout<<cnt<<endl;
    }
}
