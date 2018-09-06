#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000100];
int prime[1000100];
int sum[1000100];
int ind;

void seive(){
    for(int i=4;i<=1000000;i+=2) flag[i]++;
    //prime[0] = 2;
    //ind = 1;
    //flag[0] = 1;
    //flag[1] = 1;
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
            //prime[ind] = i;
            //ind++;
            for(int j=i+i;j<=1000000;j=j+i) {
                flag[j]++;
            }
        }
    }
    //cout<<ind<<endl;
    //cout<<prime[0]<<endl;
    //cout<<prime[1]<<endl;

}

bool check(int n){
    int tmp = 0;
    while(n/10){
        tmp = tmp + n%10;
        n = n/10;
    }
    tmp = tmp + n;
    if(flag[tmp]) return false;
    return true;
}
void dp(){
    int cnt = 0;
    sum[1] = 0;
    sum[0] = 0;
    for(int i=2;i<=1000000;i++){
        if(!flag[i]){
          if(check(i)==true) cnt++;
        }
        sum[i] = cnt;
    }
}

int main(){
    seive();
    dp();
    int t;
    int a,b;
    int ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        ans = sum[b] - sum[a-1];
        printf("%d\n",ans);
    }
}
