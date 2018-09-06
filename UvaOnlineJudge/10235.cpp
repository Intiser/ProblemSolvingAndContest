#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000050];
int prime[1000050];
int in;

void primeGen(){
    in = 1;
    prime[0] = 2; flag[0] = 1; flag[1] = 1;
    for(int i=4;i<=1000000;i=i+2) flag[i]++;
    for(int i=3;i<=1000000;i=i+2){
        if(!flag[i]){
            prime[in] = i;
            in++;
            for(int j=i+i;j<=1000000;j=j+i) flag[j]++;
        }
    }
    //cout<<in<<endl;
    //cout<<prime[0]<<" "<<prime[1]<<endl;
}

int reverseGen(int n){
    int t = 0;
    while(n/10){
        t = t*10 + n%10;
        n = n/10;
    }
    t = t*10 + n%10;
    return t;
}

void result(int n){
    if(flag[n]) {
        cout<<n<<" is not prime."<<endl;
        return ;
    }
    int t = reverseGen(n);
    if(flag[t]||t==n) {
        cout<<n<<" is prime."<<endl;
        return ;
    }
    cout<<n<<" is emirp."<<endl;
}

int main(){
    primeGen();
    int n;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n){
        result(n);
    }
}
