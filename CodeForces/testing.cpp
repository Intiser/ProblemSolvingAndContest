#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int k,a,b,t1,t2,tot;
   while(cin>>k>>a>>b){
        t1=a/k;
        t2=b/k;
        if(a<0){
            tot=(t2-t1)+1;
        }
        else if(a%k==0){
            tot=t2-t1+1;
        }
        else
            tot=t2-t1;

        cout<<tot<<endl;
   }
}
