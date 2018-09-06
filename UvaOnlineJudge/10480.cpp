#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,m,a,ans;
    while(cin>>n){
        if(n==0) break;
        m = n/2;
        if(m%2==1) a = m/2 +1 ;
        else a = m/2 ;
        ans = 0;
        for(int st=2;st<=a;st++){
            ans = ans + (m-st);
            cout<<ans<<endl;
        }
        cout<<ans<<endl;
    }
}
