#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int flag[40000];
int prime[40000];

int main(){
    int in=0;
        prime[in]=2;
        in++;
    for(int i=4;i<40000;i+=2) flag[i]++;
    for(int i=3;i<40000;i+=2){
        if(!flag[i]){
             prime[in]=i;
             in++;
            for(int j=i+i;j<40000;j+=i){
                flag[j]++;
            }
        }
    }

    int len,n,a,b,cnt;
    while(cin>>n){
        if(n==0) break;
        len=-1;
        for(int i=0;i<in;i++) {
            if(prime[i]>n) {len=i;
            break;
            }
        }
        if(len==-1) len=0;
        cnt=0;
        for(int i=0;i<len;i++){
            for(int j=i;j<n;j++){
                a=prime[i]; b=prime[j];
                if(a+b==n) cnt++;
            }
        }
        printf("%d\n",cnt);
    }
}
