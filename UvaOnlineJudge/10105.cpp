#include<iostream>
#include<stdio.h>

using namespace std;

long long int fct[15];

int main(){
    fct[0]=1;
    for(int i=1;i<15;i++){
        fct[i] = fct[i-1]*i;
    }
    int n,k,a;
    long long int tot;
    while(cin>>n>>k){
        tot = fct[n];
        for(int i=0;i<k;i++){
            scanf("%d",&a);
            tot = tot/fct[a];
        }
        cout<<tot<<endl;
    }
}
