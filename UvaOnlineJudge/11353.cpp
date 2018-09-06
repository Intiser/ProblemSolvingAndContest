#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int flag[2000050];
int prime[2000050];
int sum[2000050];
pair<int,int> arr[2000050];




int main(){
    int in=1,cnt,tmp;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=2000000;i+=2) {
            flag[i]++;
            cnt=0; tmp=i;
            while(tmp%2==0){
                tmp=tmp/2;
                cnt++;
            }
            sum[i]+=cnt;
    }
    sum[1]=1; sum[2]=1;
    for(int i=3;i<=2000000;i+=2){
        if(!flag[i]){
            prime[in]=i; in++;
            sum[i]=1;
            for(int j=i+i;j<=2000000;j+=i){
                flag[j]++;
                cnt=0; tmp=j;
                while(tmp%i==0){
                    tmp=tmp/i;
                    cnt++;
                }
                sum[j]+=cnt;
            }
        }
    }
    //cout<<prime[0]<<endl;
    for(int i=1;i<=2000000;i++){
        arr[i].first=sum[i];
        arr[i].second=i;
    }
    sort(arr,arr+2000001);
    int n,cs=1;;
    while(cin>>n){
        if(n==0) break;
        cout<<"Case "<<cs<<": "<<arr[n].second<<endl;
        cs++;
    }
}

