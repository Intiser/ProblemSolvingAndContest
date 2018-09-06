#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    double d,l,v1,v2,x,y,z;
    while(cin>>d>>l>>v1>>v2){
        x = l-d;
        y = v1 + v2;
        z = x/y;
        printf("%.6lf\n",z);
    }
}
