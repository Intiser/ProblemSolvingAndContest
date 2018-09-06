#include<iostream>
#include<stdio.h>

using namespace std;

long long int flag[2000100];
long long int prime[2000000];
long long int phi[2000100];
long long int step[2000100];
long long int sum[2000100];

/*long long int funct(long long int n,long long int len){
    long long int tmp=n;
    long long int ret=n;
    for(long long int i=0;prime[i]*prime[i]<=n&&i<len;i++){
        if(n%prime[i]==0){
            ret=ret*(prime[i]-1);
            ret=ret/prime[i];
            while(n%prime[i]==0){

            }
        }
    }
}*/
long long int stepfnct(long long int n){

    if(n==2) return 1;
     if(step[n])
        return step[n];
    long long int key=phi[n];
    //cout<<key<<endl;
    long long int ret=stepfnct(key)+1;
    step[n]=ret;

    return ret;
}

 int main(){
    long long int in=1; phi[2]=1;
    for(long long int i=3;i<=2000000;i++) phi[i]=i;

    flag[0]=1; flag[1]=1; prime[0]=2;
    for(long long int i=4;i<=2000000;i+=2) {
            flag[i]++;
            phi[i]=(phi[i]*(1))/2;

    }
    for(long long int i=3;i<=2000000;i+=2){
        if(!flag[i]){
            prime[in]=i; in++;
            phi[i]=i-1;
            for(long long int j=i+i;j<=2000000;j+=i){
                flag[j]++;
                phi[j]=(phi[j]*(i-1))/i;

            }
        }
    }
   long long int x;
    step[2]=1;
    sum[2]=1;
    for(long long int i=3;i<=2000000;i++){
       x=stepfnct(i);
       step[i]=x;
       sum[i]=sum[i-1]+step[i];
       //cout<<i<<endl;
    }
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int t,n,m,ans;
    cin>>t;
    while(t--){
        //cout<<phi[n]<<endl;
        //cout<<stepfnct(n)<<endl;
        cin>>m>>n;
        ans=sum[n]-sum[m-1];
        cout<<ans<<endl;
    }

}
