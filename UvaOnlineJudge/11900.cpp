#include<iostream>
#include<stdio.h>

using namespace std;

int arr[15];

int main(){
    int t;
    int n,p,q,a,cnt,wgt;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>n>>p>>q;
        wgt = 0;
        cnt = 0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(wgt+a<=q&&cnt+1<=p){
                wgt = wgt + a;
                cnt++;
            }
        }
        cout<<"Case "<<cas<<": "<<cnt<<endl;
    }
}
