#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int arr[1000100];

void pre(){
    for(int i=1;i<=100;i++){
        arr[i*i*i] = i;
    }
    for(int i=0;i<=1000000;i++){
        if(arr[i]==0){
            arr[i] = arr[i-1];
        }
    }
}

int main(){
    pre();
    double n;
    int ni;
    while(cin>>n){
        if(n==0) break;
        ni = floor(n);
        int a = arr[ni];
        double dx;
        dx = (n - a*a*a);
        dx = dx / (3*a*a);
        dx = a + dx;
        printf("%.4lf\n",dx);
    }
}
