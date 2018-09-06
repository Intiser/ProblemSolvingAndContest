#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,n,cnt;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        printf("Case #%d: %d = ",i,n);
        cnt=0;
        for(int j=2;j*j<=n;j++){
                if(n%j==0){
                    cnt++;
                    printf("%d * %d",j,n/j);
                        if(cnt==1) printf(" = ");
                }
                if(cnt==2) {
                    printf("\n");
                    break;
                }

        }
    }

}
