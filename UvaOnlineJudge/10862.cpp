#include<iostream>
#include<stdio.h>

using namespace std;

int arr[4050][1005];
int lenth[4050];

int main(){
    int len=1;
    int tmp,c;
    lenth[0]=1;
    lenth[1]=1;
    arr[0][0]=0; arr[1][0]=1;
    for(int i=2;i<=4000;i++){
        c=0;
        for(int j=0;j<len;j++){
            tmp=(arr[i-1][j]+arr[i-2][j]+c)%10;
            c=(arr[i-1][j]+arr[i-2][j]+c)/10;
            arr[i][j]=tmp;
        }
        while(c/10){
            arr[i][len]=c%10;
            c=c/10;
            len++;
        }
        if(c){
            arr[i][len]=c;
            len++;
        }
        lenth[i]=len;
    }
    int n;
    while(cin>>n){
        if(n==0) break;
        for(int i=lenth[2*n]-1;i>=0;i--){
            printf("%d",arr[2*n][i]);
        }
        printf("\n");
    }
}
