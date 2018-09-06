#include<iostream>
#include<stdio.h>

using namespace std;

int arr[100000];

void clr(int n){
    for(int i=0;i<=n;i++) arr[i] = 0;
}

int main(){
    int n,r,a;
    while(cin>>n>>r){

        for(int i=0;i<r;i++){
            scanf("%d",&a);
            arr[a] = 1;
        }
        if(n==r){
            printf("*\n");
            clr(n);
            continue;
        }
        for(int i =1;i<=n;i++){
            if(!arr[i]) printf("%d ",i);
            arr[i] = 0;
        }
        printf("\n");
    }

}
