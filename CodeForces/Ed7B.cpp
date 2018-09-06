#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int

int main(){
    lli n,x,y,hh,mm,mn,tot;
    char c;
    //scanf("%I64:%I64",&hh,&mm);
    while(cin>>hh>>c>>mm){
        cin>>mn;
        tot = hh*60 + mm + mn;
        tot = tot % (24*60);
        x   = tot / 60;
        y   = tot % 60;
        printf("%02lld:%02lld\n",x,y);
    }
}
