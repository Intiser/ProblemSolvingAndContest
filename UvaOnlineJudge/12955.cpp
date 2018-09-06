#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int arr[50];

int main(){
    int in=0;
    arr[0] = 1;
    for(in = 1;arr[in-1]<=100000;in++){
        arr[in] = arr[in-1]*in;
    }
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,tmp,cnt;
    while(cin>>n){
        tmp = n;
        cnt = 0;
        while(tmp>0){
            for(int i=0 ; i<in;i++){
                if(arr[i+1]>tmp){
                    tmp = tmp - arr[i];
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
