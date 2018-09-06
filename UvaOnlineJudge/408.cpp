#include<stdio.h>
#include<iostream>

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    int s,m,rslt;
    while(cin>>s>>m){
        if(s>m){
            rslt=gcd(s,m);
        }
        else{
            rslt=gcd(m,s);
        }
        printf("%10d%10d",s,m);
        if(rslt==1){
            printf("    Good Choice\n");
        }
        else{
            printf("    Bad Choice\n");
        }
        printf("\n");
    }
}
