#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int flag[100005];
int prime[100005];
vector<int>num;

int main(){
    int in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i; j<=100000;j+=i)
            flag[j]++;
        }
    }
    //cout<<in<<endl;
    int n,temp,len;
    while(cin>>n){
        if(n==0) break;
        num.clear();
        if(n>0){
            temp=n;
            for(int i=0;prime[i]<temp&&i<in;i++){
              if(temp%prime[i]==0){

                    while(temp%prime[i]==0){
                        num.push_back(prime[i]);
                        temp=temp/prime[i];
                    }
              }
            }
            if(temp!=1){
               num.push_back(temp);
            }
        }else{
             num.push_back(-1);
             temp=n*-1;
            for(int i=0;prime[i]<temp&&i<in;i++){
              if(temp%prime[i]==0){

                    while(temp%prime[i]==0){
                        num.push_back(prime[i]);
                        temp=temp/prime[i];
                    }
              }
            }
            if(temp!=1){
               num.push_back(temp);
            }

        }

        len=num.size();
        printf("%d = ",n);
        for(int i=0;i<len-1;i++){
            printf("%d x ",num[i]);
        }
        printf("%d\n",num[len-1]);
    }
}
