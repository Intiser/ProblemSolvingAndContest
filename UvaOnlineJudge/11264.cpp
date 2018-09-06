#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli arr[1050];

lli counting(lli n,lli am){
    if(n==-1||am==0) return 0;
    int ret = 0;
    while(arr[n]>am&&n>=0) n--;
    if(n<0) return ret;
    am = am%arr[n];
    //cout<<arr[n]<<endl;
    ret++;
    ret = ret + counting(n-1,am);
    return ret;
}

int main(){
    lli t;
    lli n;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++) cin>>arr[i];
        lli mx = arr[n-1];
        lli m = 0;
        for(int j=n-2;j>0;j--){
            lli cnt = counting(j,arr[j+1]-1) + 1;
            if(m<cnt) m = cnt;
        }
        cout<<m<<endl;
    }
}
