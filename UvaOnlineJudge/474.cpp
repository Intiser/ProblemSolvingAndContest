#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int n,x,cnt;
    double tot;
    while(cin>>n){
        tot=1; x=n; cnt=0;
        while(x--){
           tot=tot/2;
           while(tot<1) {tot*=10;
           cnt++;
           }
        }
        printf("2^-%d = %.3lfe-%d\n",n,tot,cnt);
    }
}
