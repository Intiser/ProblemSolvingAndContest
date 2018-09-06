#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int arr[10],start,in;
    while(cin>>arr[8]>>arr[7]>>arr[6]>>arr[5]>>arr[4]>>arr[3]>>arr[2]>>arr[1]>>arr[0]){
        start = 0;
        for(int i=8;i>=0;i--){

            if(arr[i]!=0){
                if(start==1) {
                    printf(" ");
                    if(arr[i]>0) printf("+");
                    else  printf("-");
                    printf(" ");
                }
                else if(arr[i]<0) printf("-");
                if(arr[i]<0) arr[i]=-arr[i];
                if(arr[i]>1||i==0) printf("%lld",arr[i]);
                if(i>0) printf("x");
                if(i>1) printf("^%d",i);
                start = 1;
            }
        }
        if(start == 0){
            cout<<"0";
        }
        cout<<endl;
    }
}

