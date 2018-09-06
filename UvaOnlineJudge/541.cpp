#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>

using namespace std;

int m[105][105],r[105],c[105],r_cnt,c_cnt,row,col;

int main(){
    int n;
    while(cin>>n){

            if(n==0)break;

            r_cnt=0; c_cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&m[i][j]);
                r[i]+=m[i][j];
                c[j]+=m[i][j];
                if(i==n-1) {
                    if(c[j]%2!=0) {c_cnt++; col=j+1;}
                }
                if(j==n-1){
                    if(r[i]%2!=0) {r_cnt++; row=i+1;}
                }

            }
        }
        if(r_cnt==0&&c_cnt==0) printf("OK\n");
        else if(r_cnt==1&&c_cnt==1) printf("Change bit (%d,%d)\n",row,col);
        else printf("Corrupt\n");

        for(int i=0;i<n;i++){
            r[i]=0; c[i]=0;
        }


    }
}
