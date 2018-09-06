#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli arr[1000000];
lli nw[1000000];
lli ex[1000000];


int main(){
    lli n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=k;i++){
        cin>>ex[i];
    }
    int cnt = 0;
    lli tot = 0;
    lli day = 0;
    int fl  = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) tot++;
        else {
            lli em = arr[i];
            if(nw[em]==0){
                tot = tot - ex[em];
               cnt++;
            }
            else{
                 tot++;
            }
            nw[em] = 1;

        }
        //cout<<i<<" "<<tot<<endl;
        day = i+1;
        if(cnt==k&&tot>=0) {
            fl = 1;
            break;
        }
    }
    if(fl==1) cout<<day<<endl;
    else cout<<-1<<endl;


}


