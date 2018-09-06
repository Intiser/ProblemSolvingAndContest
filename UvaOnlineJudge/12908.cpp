#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int arr[100000];

void funct(){
    int i,res=0;
    for( i=1;res<=100000000;i++){
        res += i;
        arr[i] = res ;
    }
    //cout<<i<<endl;
}
int check(int x){
    int i;
    for( i=1;arr[i]<=100000000;i++){
        if(arr[i]>x)
            return i;
    }
    return i;
}

int main(){
    //funct();
    int n,x,y,z;
    while(cin>>n){
        if(n==0) break;
        y = ((-1 + sqrt(1 - 4*(-2*n)))/(2.0))+1;
        //z = ((-1 - sqrt(1 - 4*(-2*n)))/(2.0))+1;
        x = (y*(y+1))/2 -n;
        //cout<<y<<" "<<z<<endl;
        cout<<x<<" "<<y<<endl;
    }
}
