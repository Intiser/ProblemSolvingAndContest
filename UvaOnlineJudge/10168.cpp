#include<iostream>
#include<stdio.h>

using namespace std;

int flag[10000100];
int prime[5000100];
//pair<int,int>ar[5000100];
int in=1;

int funct(int k){
    for(int i=2;i<(k/2+1);i++){
        if(!flag[i]&&!flag[k-i]){
            return i;
        }

    }
    return -1;
}

int main(){
    flag[0]=1; flag[1]=1;
    for(int i=4;i<=10000100;i+=2) flag[i]++;
    prime[0]=2;
    for(int i=3;i<=10000;i+=2){
        if(!flag[i]){
            prime[in]=i; in++;
            for(int j=i+i;j<10000100;j+=i){
                flag[j]++;
            }
        }
    }



    int n,tot,a,b,c,d,fl,tmp;
    while(cin>>n){
            fl=0;

        if(n<8){
            printf("Impossible.\n");
        }
        else if(n%2==0){
            a=2; b=2; fl=0; tmp=n-4;
            for(int i=1;i<=tmp/2+1;i++){
                c=i; d=tmp-i;
                if(!flag[c]&&!flag[d]){
                    fl=1;
                    break;
                }
            }
            if(fl==1){
                printf("%d %d %d %d\n",a,b,c,d);
            }
            else
                printf("Impossible.\n");
        }
        else{
            a=2; b=3; fl=0; tmp=n-5;
            for(int i=1;i<=tmp/2+1;i++){
                c=i; d=tmp-i;
                if(!flag[c]&&!flag[d]){
                    fl=1;
                    break;
                }
            }
            if(fl==1){
                printf("%d %d %d %d\n",a,b,c,d);
            }
            else
                printf("Impossible.\n");
        }

    }
}

