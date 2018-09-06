#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100005];
int prime[100005];

int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++; //cout<<i<<endl;
        for(int j=i+i;j<=100000;j+=i)
        flag[j]++;
        }
    }
    int t,n,x,p,ans,maxm;
    cin>>t;

    while(t--){
        cin>>n;
         maxm=0; p=1;
        for(int i=0;i<in&&prime[i]<=n;i++){
            x=prime[i];
            for(int j=1;j<=n;j++){
                p=j;// p=j+1;
                if(p*x<=n&&(p+1)*x>n){
                   if((n-x*p)>maxm){
                    maxm=(n-x*p);
                    ans=x;
                   }
                  //cout<<x<<" "<<p<<endl;
                }


            }
           /* if(p*x<=n&&(p+1)*x>n){
                   if((n-x*p)>maxm){
                    maxm=(n-x*p);
                    ans=x;
                   }
                }*/

            //if(p*x<=n&&(p+1)*x>n)
              //  if(!flag[p]) break;
        }
        cout<<ans<<endl;
        //cout<<x<<" "<<p<<endl;

    }
}
