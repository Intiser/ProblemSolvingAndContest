#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int arr[15];
int flag[1000100];

int palin(lli x){
    int len=0;
    for(lli i=1;x/i;len++){
        arr[len] = (x%(i*10))/i;
        i = i*10;
    }
    for(int i=0,j=len-1;i<=j;i++,j--){
        if(arr[i]!=arr[j])
            return 0;
    }
    return 1;
}

int main(){
    flag[0]=1;
    for(int i =4;i<=1000000;i+=2) flag[i]++;
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
            for(int j=i+i;j<=1000000;j+=i)
                flag[j]++;
        }
    }
    lli n;
    while(cin>>n){
        cout<<2*n<<endl;
        if(palin(n)&&!flag[n]) break;
    }
}
