#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

int main(){
    int r,n,m,c=1;
    while(cin>>r>>n){
        if(n==0&&r==0) break;
            m=ceil(r*1.0/n)-1;
            if(m>26){
                printf("Case %d: impossible\n",c);
            }
            else{
                printf("Case %d: %d\n",c,m);
            }
            c++;
    }
}
