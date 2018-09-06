#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli flagc[105000];
lli flagr[105000];
lli arr[105000];

int main(){
    lli n,m;
    cin>>n>>m;
    lli r,c;
    lli tot = n*n;
    lli cntC = 0,cntR = 0;
    for(int i=0;i<m;i++){
        cin>>r>>c;
        flagr[r]++;
        flagc[c]++;
        if(flagr[r]==1){
            tot = tot - (n - cntC);
            cntR++;
        }
        if(flagc[c]==1){
            tot = tot - (n- cntR);
            cntC++;
        }
        arr[i] = tot;
    }
    cout<<arr[0];
    for(int i=1;i<m;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
