#include<iostream>
#include<stdio.h>

using namespace std;

long long int arr[100];

int main(){
    long long int male,female,m,f,tot;
    male = 1; female = 0;
    for(int i=1;i<81;i++){
        f = female + male;
        m = female ;
        tot = f + m;
        female = f;
        male = m;
        arr[i] = tot;
    }
    int n;
    while(cin>>n){
        if(n==0) break;
        cout<<arr[n]<<endl;
    }
}
