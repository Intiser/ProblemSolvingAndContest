#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int
lli x,y;

lli gcd(lli a,lli b){
    if(a%b==0) return b;
    int ret = gcd(b,a%b);
    return ret;
}

lli egcd(lli a,lli b){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    lli x1,y1;
    lli d = egcd(b,a%b);
    x1 = y;
    y1 = x - (a / b) * y;
    x =  x1;
    y =  y1;
   // cout<<x<<" "<<y<<endl;
    return d;
}



int main(){
       // freopen("in.txt","r",stdin);
        //freopen("out.txt","w",stdout);
        lli a,b;
        lli d;
        while(cin>>a>>b){
            d = egcd(a,b);
            cout<<x<<" "<<y<<" "<<d<<endl;

        }
}
