#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli power(lli x,lli p){
    lli an = 1;
    while(p--){
        an = an * x;
    }
    return an;
}

int main(){
    lli n;
    int t;
    cin>>t;
    while(t--){
        //cout<<power(t,n)<<endl;
        cin>>n;
        int len = 0;
        for(lli i=1;n/i;len++){
            i=i*10;
        }
        lli tmp = n;
        //cout<<len<<endl;
        lli ans = power(tmp%10,len);
        for(lli i=10;tmp/i;){
            tmp = tmp/i;
             ans = ans + power(tmp%10,len);
        }
        if(ans == n){
            printf("Armstrong\n");
        }
        else{
            printf("Not Armstrong\n");
        }
    }
}
