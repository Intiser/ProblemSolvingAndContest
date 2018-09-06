#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];

long long int funct(int n){
    long long int tmp=n;
    long long int ans=n,ret=n;
    long long div=1;
    for(int i=1;i*i<=n&&i<100000;i++){
          if(!flag[i]){
            if(tmp%i==0){
                //int ex=0;
                ans=ans*(i-1);
                ans=ans/i;
                while(tmp%i==0){
                    tmp=tmp/i;
                   //ex++;
                }
                //div=div*(ex+1);
            }

          }
          //if(n%i==0&&i*i<n) ret=ret-2;
          //if(n%i==0&&i*i==n) ret=ret-1;
    }
    if(tmp>1){
        ans=ans*(tmp-1);
        ans=ans/tmp;
       // div=div*2;
    }
    //ret=ret-ans-div+1;

   /* if(ans==(n-1)||n==1) ret=0;
    else {
        ret=ret-(ans-1);
    }*/

    return ans;

}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<100000;j+=i)
        flag[j]++;
        }
    }
    long long int n,ret,ans,temp;
    while(cin>>n){
        //cout<<funct(n,in)<<endl;
        if(n!=1)
        ret=funct(n);

        if(ret==(n-1)||n==1){
            ans=0;
        }
        else{
            temp=n;
            for(long long int i=1;i*i<=n;i++){
                if(n%i==0&&i*i<n){
                    temp=temp-2; //cout<<" Y"<<endl;
                }
                 if(n%i==0&&i*i==n){
                    temp--; //cout<<" Y"<<endl;
                }

            }
            ans=temp-(ret-1);
        }
        /*if(n!=0)
        ans=funct(n);
        else ans=0;*/
        cout<<ans<<endl;
    }
}
