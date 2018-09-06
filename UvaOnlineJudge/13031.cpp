#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

long long int arr[1050];

int main(){
    long long int t;
    long long int n;
    long long int k,p,tot;
    cin>>t;
    for(int cas=1;cas<=t;cas++){
        cin>>n;
        tot = 0;
        for(int i=0;i<n;i++){
            cin>>k>>p;
            arr[p]+=k;
            tot += k;
        }
        long long int maxm = 0;
        long long int res = 0;
        for(int i=0;i<=1000;i++){
            if(arr[i]){
                res = tot*i;
                tot = tot - arr[i];
                //cout<<" # "<<res<<endl;
            }
            arr[i] = 0;
            if(res>maxm) maxm = res;
        }
        cout<<"Case "<<cas<<": "<<maxm<<endl;
    }
}
