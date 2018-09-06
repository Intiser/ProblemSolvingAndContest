#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int flag[2000];
int prime[2000];

int main(){
    int in=0;
        prime[in]=1;
        in++;
        prime[in]=2;
        in++;
    for(int i=4;i<2000;i+=2) flag[i]++;
    for(int i=3;i<2000;i+=2){
        if(!flag[i]){
             prime[in]=i;
             in++;
            for(int j=i+i;j<2000;j+=i){
                flag[j]++;
            }
        }
    }
    int n,c,tot,len,st,en;
    while(cin>>n>>c){
        for(int i=0;i<in;i++){
            if(prime[i]>n){
                len=i;
                break;
            }
        }
        if(len%2==0) tot=c*2;
        else tot=(2*c)-1;

        if(tot>len) {st=0;en=len;}
        else{
            st=(len-tot)/2;
            en=st+tot;
        }
        printf("%d %d: ",n,c);
        for(int i=st;i<en;i++){
            if(i!=en-1)
                printf("%d ",prime[i]);
            else
                printf("%d\n",prime[i]);
        }
        printf("\n");


    }

}
