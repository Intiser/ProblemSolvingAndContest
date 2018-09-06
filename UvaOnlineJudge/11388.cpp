#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,a,b,G,L,Lr,Sm,q,r;
    cin>>t;
    while(t--){
        cin>>a>>b;

        if(b%a==0)
            printf("%d %d\n",a,b);
        else
            printf("-1\n");

    }
}
