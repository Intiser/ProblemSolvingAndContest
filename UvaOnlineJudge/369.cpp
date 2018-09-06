#include<iostream>
#include<stdio.h>

using namespace std;

long long int arr[105];
long long int div[105];

void test(int a,int b){
    long long t=1;
    for(int i=a;i<=b;i++){
        t*=i;
    }
    cout<<t<<endl;
}

int main(){
    //freopen("out.txt","w",stdout);

    long long int n,m,t,ans,l,fl,dv;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=m+1;i<=n;i++) arr[i]=1; //cout<<"yes"<<endl;
        l=n-m; //cout<<l<<endl;
       // test(m+1,n);
       // test(1,l);
        for(int i=2;i<=l;i++){
                fl=0;
            for(int j=i;j<=n;j++){
                //cout<<arr[j]<<endl;
                if(arr[j]&&j%i==0){
                    t=j/i;
                    arr[j]=0;
                    arr[t]++;
                    fl=1;
                    //cout<<i<<" "<<j<<" "<<t<<endl;
                    break;
                }
            }
            if(fl==0) div[i]=1;
        }
        //cout<<endl;
        ans=1; dv=1;
        for(int i=1;i<=n;i++){
            if(arr[i]){
                //cout<<i<<" "<<arr[i]<<endl;
                while(arr[i]>0){
                    ans=ans*i;
                    arr[i]--;
                }
            }
            if(div[i]){
                dv*=i;
            }
        }
        printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,ans/dv);
        //cout<<""<<ans/dv<<endl;
        for(int i=0;i<105;i++) {arr[i]=0; div[i]=0;}
    }
}
