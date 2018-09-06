#include<iostream>
#include<stdio.h>

using namespace std;



int main(){

    long long int n,m,r,tmp,l;
    while(cin>>n>>m){
            if(n==0&&m==0) break;
            tmp=1; r=1;
            l=n-m;
            if(l<m) l=m;
            for( long long int i=l+1;i<=n;i++){
                tmp=(i*tmp)/r;
                r++;
            }
            cout<<tmp<<endl;
        //cout<<arr[n][m]<<endl;
    }
}

