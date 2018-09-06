#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int flag[1000010];
int prime[1000000];

int main(){
    int in=1;
    for(int i=4;i<=1000000;i+=2) flag[i]++;

    prime[0]=2;
    for(int i=3;i<=1000000;i+=2){
        if(!flag[i]){
                    prime[in]=i;
                    in++;
            for(int j=i+i;j<=1000000;j+=i){
                flag[j]++;
            }
        }
    }

   // for(int i=0;i<in;i++) printf("%d\n",prime[i]);

   // printf("%d\n",in);
   int n,len,a,b,flag;
   while(cin>>n){
        if(n==0) break;
        len=-1;
        for(int i=0;i<in;i++)
        if(prime[i]>n){
            len=i;
            break;
        }

        if(len==-1) len=in;
       // printf("%d\n",len);
       flag=0;
       for(int i=0;i<len;i++){
            for(int j=i;j<len;j++){
                a=prime[i]; b=prime[j];
                if(a+b==n) {
                flag=1;
                break;}
            }
            if(a+b==n) break;
       }

        if(flag==1)
       printf("%d = %d + %d\n",n,a,b);
       else
        printf("Goldbach's conjecture is wrong.\n");

   }

}
