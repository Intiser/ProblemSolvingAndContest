#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int main(){
    lli n,k;
    cin>>n>>k;
    for(int i=1;;i++){
        lli tot = n*i;
        if((tot%10)-k==0||(tot%10==0)){
            //cout<<tot<<endl;
            cout<<i<<endl;
            break;
        }
    }
}
