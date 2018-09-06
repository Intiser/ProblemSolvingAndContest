#include<iostream>
#include<stdio.h>

using namespace std;


int main(){
    int a,b,c,d,e,f,x,tot;
    while(cin>>a>>b>>c>>d>>e>>f){
            x = a+b+f;
            tot = x*x;
            tot = tot - b*b;
            tot = tot - d*d;
            tot = tot - f*f;
            cout<<tot<<endl;
    }
}
