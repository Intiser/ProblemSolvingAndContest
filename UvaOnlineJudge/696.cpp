#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int m,n,ans;
    while(cin>>m>>n){
        if(m==0&n==0) break;

        if((m<=2&&n<=2)||m==1||n==1) {
            ans=m*n;
        }
        else if(m==2||n==2){
            if(m==2){
                ans=ceil((n-1)*1.0/4)*4;
                if(n%4==1) ans+=2;
            }
            else {
                ans=ceil((m-1)*1.0/4)*4;
                if(m%4==1) ans+=2;

            }

        }
        else {
            if((m*n)%2==0)
            ans=(m*n)/2;
            else
            ans=(m*n)/2+1;
        }
      printf("%d knights may be placed on a %d row %d column board.\n",ans,m,n);
    }
}
