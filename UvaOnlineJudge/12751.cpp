#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t;
    int n,k,x;
    int tot,tp;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>n>>k>>x;
        tot = (n*(n+1))/2;
        tp  = (k*(2*x+(k-1)))/2;
        tot =  tot - tp;
        cout<<"Case "<<cas<<": "<<tot<<endl;
    }
}
