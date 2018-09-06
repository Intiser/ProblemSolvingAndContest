#include<iostream>
#include<stdio.h>

using namespace std;

long long int arr[1000100];

long long int gcd(long long int a,long long int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
long long int lcm(long long int a,long long int b){
    if(a>b)
    return a*b/(gcd(a,b));
    else
    return a*b/(gcd(b,a));
}

int main(){


}
