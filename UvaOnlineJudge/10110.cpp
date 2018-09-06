#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
   long long int n,tm,cnt;
    double p;
    while(cin>>n){
        if(n==0)
            break;
        p=sqrt(n);
        tm=floor(p);
        //cnt=0;
        //for(int i=1;i<p;i++){
         //   if(n%i==0)cnt+=2;
        //}
        if(tm*tm==n) //cnt++;
            printf("yes\n");
        else printf("no\n");
    //if(cnt%2==0)
    }
}

