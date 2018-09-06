#include<stdio.h>
#include<iostream>

using namespace std;

#define lli long long int

lli flag[100001000];
lli prime[100001000];
lli ind;

void seive(){
    for(int i=4;i<=100000000;i+=2) flag[i]++;
    prime[0] = 2;
    flag[0] = 1;
    flag[1] = 1;
    ind = 0;
    for(int i=3;i<=100000000;i+=2){
        if(!flag[i]){
            prime[ind] = i;
            ind++;
            for(int j=i+i;j<=100000000;j=j+i){
                flag[j]++;
            }
        }
    }
    //cout<<ind<<endl;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    seive();
    lli n;
    while(cin>>n){
        if(n<4) printf("%lld is not the sum of two primes!\n",n);
        else if(n%2==1){
            if(!flag[n-2]) printf("%lld is the sum of 2 and %lld.\n",n,n-2);
            else printf("%lld is not the sum of two primes!\n",n);
        }
        else{
            int in = lower_bound(prime,prime+ind,n/2) - prime;
            while(prime[in]>=n/2) in--;
            lli ans = -1;
            for(;in>=0;in--){
                if(!flag[n-prime[in]]){
                    ans = prime[in];
                    break;
                }
            }
            if(ans==-1)printf("%lld is not the sum of two primes!\n",n);
            else {
                lli mx ,mn;
                mn = n-ans;
                if(ans<mn){
                    mx = mn;
                    mn = ans;
                }
                else{
                    mx = ans;
                }
                printf("%lld is the sum of %lld and %lld.\n",n,mn,mx);
            }
        }

    }
}
