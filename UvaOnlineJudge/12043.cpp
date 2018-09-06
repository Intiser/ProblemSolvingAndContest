#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];
int div[100005];
int sum[100005];

/*int funct(int n,int len){
    int tmp=n;
    int dv=1;
    sum[n]++;
    for(int i=0;i<len&&prime[i]*prime[i]<=tmp;i++){
        if(tmp%prime[i]==0){
            int exp=0;

            while(tmp%prime[i]==0){
                tmp=tmp/prime[i];
                exp++;

            }
            dv*=(exp+1);
        }
    }
    if(tmp>1){
        dv*=2;
    }
    return dv;

}*/

int main(){
   /* int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<100000;j+=i)
        flag[j]++;
        }
    }*/
     flag[0]=1; flag[1]=1; sum[1]=1;
    //for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=2;i<=100000;i++){
        flag[i]+=2;
        sum[i]+=i;
        sum[i]++;
        for(int j=i+i;j<=100000;j+=i){
            flag[j]++;
            sum[j]+=i;
        }
    }
    int t,n,a,b,k;
    //int g,h;
    long long int g,h;
    cin>>t;
    while(t--){
            cin>>a>>b>>k;
           // cout<<funct(n,in)<<endl;
           // cin>>n;
          // cout<<sum[n]<<endl;
           //cout<<flag[n]<<endl;
        g=0; h=0;
        for(int i=a;i<=b;i++){
            if(i%k==0){
                g+=flag[i];
                h+=sum[i];
            }
        }
        cout<<g<<" "<<h<<endl;
    }

}

