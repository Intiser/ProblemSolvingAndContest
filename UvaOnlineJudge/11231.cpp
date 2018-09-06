#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int m,n,c,ans,tot;
    while(cin>>n>>m>>c){
        if(m==0&&n==0&&c==0)
            break;
         ans=0;
        if(m<8||n<8) ans=0;
        else {
            tot=(m-7)*(n-7);
            if(c==1) {
                if(tot%2==0) ans=tot/2;
                else ans=tot/2+1;
            }
            else {
                ans=tot/2;
            }
        }
        cout<<ans<<endl;
    }
}
