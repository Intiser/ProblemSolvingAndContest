#include<iostream>
#include<stdio.h>
#include<algorithm>


using namespace std;

long long int flag[200005];
long long int prime[200005];
long long int phi[200005];
long long int sum[200005];

pair<int,int> arr[200010];

long long int gcd(long long int a,long long int b){
    if(b==0) return a;

    return gcd(b,a%b);
}

int main(){
    //long long int sum=0;
   /* int in=1,idx=3;  phi[2]=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    //arr[0].first=1; arr[0].second=0;
    //arr[1].first=1; arr[1].second=1;
    //arr[2].first=2; arr[0].second=1;
    //arr[2].first=3; arr[0].second=2;
    for(int i=4;i<=200000;i+=2) {
            flag[i]++;
          //arr[idx].first=i-1; arr[idx].second=2;
          //idx++;
          //cout<<arr[idx-1].second<<" "<<arr[idx-1].first<<endl;
          phi[i]=(phi[i]*(1))/2;
    }
    for(int i=3;i<=200000;i+=2){
        //arr[idx].first=i; arr[idx].second=1;
        //idx++;
        if(!flag[i]){
        prime[in]=i; in++;
        phi[i]=i-1;
        for(int j=i+i;j<=200000;j+=i){
            flag[j]++;
             //phi[j]=(phi[j]*(i-1))/i;
            phi[j]=phi[j]/i;
            phi[j]=phi[j]*(i-1);
        }
        }

    }*/
    long long int in=1; phi[2]=1;
    for(long long int i=3;i<=200000;i++) phi[i]=i;

    flag[0]=1; flag[1]=1; prime[0]=2;
    for(long long int i=4;i<=200000;i+=2) {
            flag[i]++;
            phi[i]=(phi[i]*(1))/2;

    }
    for(long long int i=3;i<=200000;i+=2){
        if(!flag[i]){
            prime[in]=i; in++;
            phi[i]=i-1;
            for(long long int j=i+i;j<=200000;j+=i){
                flag[j]++;
                phi[j]=(phi[j]*(i-1))/i;

            }
        }
    }
    sum[0]=0;
    sum[1]=2;

    for(int i=2;i<=200000;i++) sum[i]=sum[i-1]+phi[i];

    //cout<<sum[2]<<endl;


    long long int n,idn,a,b,tp,cnt;
    while(cin>>n){
            if(n==0) break;

        for(int i=0;i<=200000;i++){
            if(n<=sum[i]){
                idn=i;
                break;
            }
        }
        if(n==1){
            a=1; b=0;
        }
        else if(n==2){
            a=1; b=1;
        }
        else if(!flag[idn]){
            b=n-sum[idn-1];
            a=idn;
        }
        else{
            cnt=1; a=idn;
            b=1;
            for(long long int i=2;i<idn;i++){
                if((cnt+sum[idn-1])==n) break;
                //if(i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0&&i%11!=0&&i%13!=0&&i%17!=0&&i%19!=0){
                    tp=gcd(i,idn);
                    if(tp==1) {
                        b=i;
                        cnt++;
                    }
                //}
            }
        }
        printf("%lld/%lld\n",b,a);
        //cout<<b<<" "<<a<<" "<<idn<<endl;
    }

    //cout<<prime[0]<<endl;
    //cout<<idx<<endl;

}
