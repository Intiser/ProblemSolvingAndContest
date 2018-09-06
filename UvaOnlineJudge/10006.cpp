#include<iostream>
#include<stdio.h>

using namespace std;

int flag[100000];
int ctln[100000];

long long int modpow(int a,int p,int m){
    if(p==0) return 1;
    if(p==1) return a;
    long long int x = modpow(a,p/2,m)%m;
    x= (x*x)%m;
    if(p%2==1) x= ((a%m)*((x)%m))%m;
    return x;
}

int main(){
    flag[0]=1; flag[1]=1; int t,r,in=0;
    for(int i=4;i<=65000;i+=2) {
        flag[i]++;
        r=0;
        for(int j=2;j<i;j++){
            t = modpow(j,i,i);
            if(t!= j) {
                r=1;
                break;
            }
        }
        if(r==0){
            ctln[i]=i;
            in++;
            //cout<<in<<endl;
        }
    }
    for(int i=3;i<=65000;i+=2){
        if(!flag[i]){
            for(int j=i+i;j<=65000;j+=i){
                flag[j]++;
            }
        }
        else{
            r=0;
            for(int j=2;j<i;j++){
                t = modpow(j,i,i);
               if(t!= j) {
                    r=1;
                    break;
                }
            }
            if(r==0){
                ctln[i]=i;
                in++;
                //cout<<in<<" "<<i<<endl;
            }
        }
         //cout<<in<<" "<<i<<endl;
    }
    //cout<<in<<endl;
    int n,tst1,tst2;
    while(cin>>n){
        if(n==0) break;
        if(ctln[n]){
            printf("The number %d is a Carmichael number.\n",n);
        }
        else {
            printf("%d is normal.\n",n);
        }
    }
    /*int a,k;
    while(cin>>a>>k){
        for(int i=2;i<k;i++){
            cout<<i<<" "<<modpow(i,k,k)<<endl;
        }
        cout<<modpow(a,k,k)<<endl;
    }*/
}
