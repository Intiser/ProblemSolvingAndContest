#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

long long int arr[30];

long long int check(long long int x,long long int y){
   long long int a,b;
   a =x; b=y;
   for(int i=1,z = 2;i<=20;i++,z=z*2){
        a = x%z;
        b = y%z;
        if(x%z==0) a=z;
        if(y%z==0) b=z;
        a = (z- a) + x;
        b = (z- b) + y;
        //cout<<a<<" # "<<b<<endl;
        if(a/z==b/z) return i;
   }
   return -1;
}

int main(){
    arr[1] = 2;
    for(int i=2;i<=20;i++) arr[i] = arr[i-1] * 2;
    long long int n,a,b,x,y,res;
    while(cin>>n>>a>>b){
       res = check(a,b);
        //y = check(b);
        //cout<<x<<" "<<y<<endl;
        //res = max(x,y);
        //a = max(x,y);
       // b = min(x,y);
        //res = a - b +1;
        cout<<res<<endl;
    }
}
