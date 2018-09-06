#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int p,n,o;
    while(cin>>p>>n>>o){
        if(n>(o-p)){
            printf("Hunters win!\n");
        }
        else{
            printf("Props win!\n");
        }
    }
}
