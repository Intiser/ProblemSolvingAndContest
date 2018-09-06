#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int flag[100005];
int phi[100000];

int main(){
    long long int n,h,ans,tmp;


    for(int i=2;i<=100000;i++){
            if(!flag[i])
        for(int j=i+i;j<=100000;j+=i){
            flag[j]++;

        }
    }
    while(cin>>n){
            if(n==0) break;

        h=floor(sqrt(n));
        ans=n; tmp=n;
        if(n%2==0) {
        ans=ans/2;
            while(tmp%2==0)
            tmp=tmp/2;
        }
        for(int k=3;k<=h;k+=2){
            if(!flag[k]){
                 if(n%k==0)
                    {ans=ans*(k-1);
                     ans=ans/k;
                     while(tmp%k==0)
                     tmp=tmp/k;
                    }
            }
        }
        if(n==ans)
            ans=n-1;
        else if(tmp>1)
        {
           ans=ans*(tmp-1);
           ans=ans/tmp;
        }

        cout<<ans<<endl;
    }
}
