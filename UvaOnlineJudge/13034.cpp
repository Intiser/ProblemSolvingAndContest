#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    long long int t,a,fl;
    cin>>t;
    for(int c=1;c<=t;c++){
        fl = 0;
        for(int i=0;i<13;i++){
            cin>>a;
            if(a==0){

                fl=1;
            }
        }
        if(fl==0)
            printf("Set #%d: Yes\n",c);
        else
            printf("Set #%d: No\n",c);
    }
}
