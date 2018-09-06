#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int main(){
    int n;
    int a, x = 0;
    int b, y = 0;
    cin>>n;
    for(int i =0;i<n;i++){
        scanf("%d",&a);
        x = x|a;
    }
    for(int i =0;i<n;i++){
        scanf("%d",&b);
        y = y|b;
    }
    cout<<x+y<<endl;
}
