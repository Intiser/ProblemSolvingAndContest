#include<iostream>
#include<stdio.h>

using namespace std;

int arr[100];
int flag[100000];
int sum[100000];

int main(){
    int n,cas=1,fl,in,t;
    while(cin>>n){
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        fl= 0;
        sum[0] = arr[0] + arr[1];
        flag[sum[0]] = 1;
        in = 1;
        for(int i =2 ; i<n ; i++){
            if(arr[i-1]>=arr[i]) fl=1;
            if(flag[arr[i]]){
                fl = 1;
            }
            //if(fl==1) break;
            t = in;
            for(int j=0;j<t;j++){
                sum[in] = sum[j] + arr[i];
                flag[sum[in]] = 1;
                in++;
            }
            for(int j=0;j<i;j++){
                sum[in] = arr[j] + arr[i];
                flag[sum[in]] = 1;
                in++;
            }
        }
        cout<<in<<endl;
    }
}
