#include<bits/stdc++.h>

using namespace std;

//map<int,int> flag;
long long int flag[100005];
long long int prime[100005];

int isprime(long long int n){
    if(n%2==0) return 0;
    if(n%3==0) return 0;
    if(n%5==0) return 0;
    if(n%7==0) return 0;
    if(n%11==0) return 0;
    if(n%13==0) return 0;
    if(n%17==0) return 0;
    if(n%19==0) return 0;

    long long int tmp=n;
    for(long long int i=0;prime[i]*prime[i]<=tmp;i++){
        if(tmp%prime[i]==0){
            return 0;
        }
    }
    if(tmp==n) return 1;
    else return 0;
}

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
    //cout<<in<<endl;
    long long int L,U,frst,two,maxm,minm,temp,mx_a,mx_b,mn_a,mn_b;
    while(cin>>L>>U){
        frst=0; maxm=0; minm=1000005; two=0;
        for(long long int i=L;i<=U;i++){
            if(isprime(i)==1&&frst==0){
                frst=i;
            }
            else if(isprime(i)==1){
                temp=i-frst;
                //cout<<i<<endl;
                two=1;
                if(maxm<temp) {
                    maxm=temp;
                    mx_a=frst;
                    mx_b=i;
                }
                if(minm>temp){
                    minm=temp;
                    mn_a=frst;
                    mn_b=i;
                }
                frst=i;
            }
        }
        if(two){
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",mn_a,mn_b,mx_a,mx_b);
        }
        else{
            printf("There are no adjacent primes.\n");
        }
    }
   /* long long int n;
    while(cin>>n){
        cout<<isprime(n)<<endl;
    }*/
}
