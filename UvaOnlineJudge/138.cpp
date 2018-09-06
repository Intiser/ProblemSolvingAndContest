#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int first[15];
int sec[15];

int main(){
    first[0]=1;
    first[1]=6; sec[1]=8;
    for(int i=2;i<=10;i++){
        first[i]=first[i-1]*6-first[i-2];
        sec[i]= sec[i-1] + first[i-1] + first[i];
    }
    for(int i=1;i<=10;i++){
        printf("%10d%10d\n",first[i],sec[i]);
    }
}
