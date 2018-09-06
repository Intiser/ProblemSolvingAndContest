#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int arr[1000];
int nw[1000];

int main(){
    lli n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        nw[i] = arr[i];
    }
    int mn = 0;
    for(int i=1;i<n;i++){
        int tot = nw[i] + nw[i-1];
        if(tot<k){
            nw[i] = nw[i] + (k - tot);
            mn = mn  + (k - tot);
        }

    }
    cout<<mn<<endl;
    cout<<nw[0];;
    for(int i=1;i<n;i++){
            cout<<" "<<nw[i];
    }
    cout<<endl;
}

