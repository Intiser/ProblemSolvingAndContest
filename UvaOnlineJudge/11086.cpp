#include<iostream>
#include<stdio.h>

using namespace std;

int arr[1100000];
int flag[1100000];
int used[1100000];
int n,mx,in;

void sieve(){
    flag[0]=1; flag[1]=1;
    for(int i=4;i<=1050000;i+=2) flag[i]++;
    for(int i=3;i<=1050000;i+=2){
        if(!flag[i]){
        for(int j=i+i;j<=1050000;j+=i)
            flag[j]++;
        }
    }
    for(int i=4;i<=1050000;i++){
        if(flag[i]){
            for(int j=i+i;j<=1050000;j = j+i)
                flag[j] = 0;
        }
    }
    flag[1] = 0;
    flag[2] = 0;
    flag[3] = 0;
}

void clr(){
    for(int i=0;i<n;i++){
        used[arr[i]] = 0;
    }
    for(int i=0;i<=mx;i++) flag[i] = 0;
}

int result(){
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(flag[arr[i]]) cnt++;
        //cout<<arr[i]<<" "<<flag[arr[i]]<<endl;
    }
    return cnt;
}

int main(){
    sieve();
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n){
        mx = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>mx) mx = arr[i];
        }
        //result();
        cout<<result()<<endl;
        //clr();
    }
}
