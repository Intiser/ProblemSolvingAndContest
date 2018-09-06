#include<iostream>
#include<stdio.h>

using namespace std;

int flag[1000100];
int real[1000100];

int main(){
    //freopen("out.txt","w",stdout);
    int nw,tmp,in=0;
    for(int i=1;i<=1000000;i++){
        tmp=i;
        nw=i;
        while(tmp/10){
            nw=nw+(tmp%10);
            tmp=tmp/10;
        }
        nw=nw+tmp;
        flag[nw]++;
        if(!flag[i]){
            real[in]=i;
            in++;
        }
    }
    //cout<<in<<endl;
    for(int i=0;i<in;i++) printf("%d\n",real[i]);
}
