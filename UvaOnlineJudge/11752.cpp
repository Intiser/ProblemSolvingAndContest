#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

long long  flag[100005];
long long  prime[100005];
unsigned long long  arr[10000005];




int main(){
    freopen("out.txt","w",stdout);
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=100000;j+=i)
        flag[j]++;
        }
    }
    cout<<prime[0]<<endl;
    arr[0]=1;
    int ind=1;
    unsigned long long tt;
    for(int i=0;i<in;i++){
            tt=prime[i]*prime[i]*prime[i]*prime[i];
            //tt=i*i*i*i;
        while(tt>0){
            /*if(tt){
                arr[ind]=tt;
                ind++;
            }else
                break;*/
                cout<<tt<<endl;
                arr[ind]=tt; ind++;
            tt=tt*prime[i]*prime[i];
            //tt=tt*i*i;
        }
    }
    //cout<<ind<<endl;
    sort(arr,arr+ind);
    for(int i=0;i<ind;i++) cout<<arr[i]<<endl;
}

