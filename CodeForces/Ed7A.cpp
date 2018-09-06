#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int

int main(){
    lli n,x,y;
    while(cin>>n){
        x = ceil((-1+sqrt(1-4*(-2*n)))/2);
        //cout<<x<<endl;
        y = (x-1)*x/2;
        x = n - y;
        cout<<x<<endl;
    }
}
