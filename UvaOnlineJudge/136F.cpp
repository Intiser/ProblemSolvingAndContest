#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

long long int two[100],three[100],five[100],arr[100000];

int main(){
    two[0]=1; three[0]=1; five[0]=1;
    for(int i=1;i<33;i++) two[i]=two[i-1]*2;
    for(int i=1;i<26;i++) three[i]=three[i-1]*3;
    for(int i=1;i<19;i++) five[i]=five[i-1]*5;

   int in=1;
   arr[0]=1;

    for(int i=0;i<15;i++){
        for(int j=0;j<20;j++){
            for(int k=0;k<32;k++){
                    if(two[k]*three[j]*five[i]>0)
                {
                    arr[in]=two[k]*three[j]*five[i];
                    in++;
                }
                //if(in==7000) break;
            }
            //if(in==7000) break;
        }
        //if(in==7000) break;
    }
    sort(arr,arr+in);
    printf("The 1500'th ugly number is %lld.\n",arr[1500]);
}
