#include<iostream>
#include<stdio.h>

using namespace std;

pair<int,int> arr[10500];
int flag[10500];

int main(){
    int n,in,a,b,fl;
 /*   for(int i=2;i<80;i++){
        //cout<<i*i*i-(i-1)*(i-1)*(i-1)<<endl;
        for(int j=1;j<i;j++){
            arr[in]=i*i*i-j*j*j;
            in++;
            cout<<i*i*i-j*j*j<<endl;
        }
    }*/
    while(cin>>n){
        if(n==0) break;

        fl=0;
        for(int i=2;i<80;i++){

            for(int j=1;j<i;j++){
                if((i*i*i-j*j*j==n)){
                    a=i; b=j; fl=1;
                }
                if(fl==1) break;
            }
            if(fl==1) break;
        }
        if(fl==1) printf("%d %d\n",a,b);
        else printf("No solution\n");
    }
}
