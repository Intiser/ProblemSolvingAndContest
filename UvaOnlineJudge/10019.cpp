#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,m,tmp,n1,n2;
    cin>>t;
    while(t--){
        cin>>m;
        n1=0;
        tmp=m;
        while(tmp/2){
            if(tmp%2==1) n1++;

            tmp=tmp/2;
        }
        if(tmp%2==1) n1++;
        tmp=m;
        n2=0;
        while(tmp/10){
            if(tmp%10==1||tmp%10==2||tmp%10==4||tmp%10==8) n2++;
            else if(tmp%10==3||tmp%10==5||tmp%10==6||tmp%10==9) n2+=2;
            else if(tmp%10==7) n2+=3;
            tmp=tmp/10;
        }
        if(tmp%10==1||tmp%10==2||tmp%10==4||tmp%10==8) n2++;
        else if(tmp%10==3||tmp%10==5||tmp%10==6||tmp%10==9) n2+=2;
        else if(tmp%10==7) n2+=3;
        cout<<n1<<" "<<n2<<endl;
    }
}
