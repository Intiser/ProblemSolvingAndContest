#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

#define lli long long int

inline lli power ( lli a, lli p ) {
    lli res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}


int main(){

    lli ans,n,x,y,m,hgt,t;
    while(cin>>x>>y){
        //cout<<ans<<endl;
        lli mx = 0;
        lli a = 0;
        lli b = 0;
        for(lli i=1;i<=32;i++){

        }
    }
}
