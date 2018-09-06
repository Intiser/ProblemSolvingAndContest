#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int

int main(){
    lli x,y;
    lli dif;
    while(cin>>x>>y){
        dif = y - x;
        if(dif<=3){
            cout<<dif<<endl;
        }
        else{
            lli ctemp = (dif)/2;
            if(dif%2) ctemp++;
            lli c =  - 2*ctemp;

            lli x = ceil((-1+sqrt(1 - 4*c))/2);
            //cout<<x<<endl;

        }
    }
}
