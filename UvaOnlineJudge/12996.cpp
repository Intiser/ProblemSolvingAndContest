#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t;
    int n,k;
    int a[50];
    int d[50];
    int tot;
    int fl = 0;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n>>k;
        fl = 0;
        tot =0;
        for(int i=0;i<n;i++){
           cin>>a[i];
        tot = tot + a[i];
        }
         for(int i=0;i<n;i++){
            cin>>d[i];
            if(a[i]>d[i]) fl=1;
            }
        if(tot>k) fl = 1;
        if(fl==1){
            printf("Case %d: No\n",cas);
        }
        else
            printf("Case %d: Yes\n",cas);
    }
}
