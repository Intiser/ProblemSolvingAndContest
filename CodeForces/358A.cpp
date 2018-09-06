#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int main(){
    lli n,m;
    cin>>n>>m;
    lli one  = (m+1)/5;
    lli two  = (m+2)/5;
    lli three  = (m+3)/5;
    lli four  = (m+4)/5;
    lli five  = m/5;
    lli tt = one + two + three + four + five;
    if(n%5==0){
        tt = tt * (n/5);
    }
    else{
        tt = tt * (n/5);
        if(n%5>=1) tt = tt + one;
        if(n%5>=2) tt = tt + two;
        if(n%5>=3) tt = tt + three;
        if(n%5==4) tt = tt + four;
    }
    cout<<tt<<endl;
}
