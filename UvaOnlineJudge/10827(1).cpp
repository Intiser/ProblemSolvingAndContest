#include<iostream>
#include<stdio.h>

using namespace std;

int arr[200][200];
int sum[200][200];

int main(){
    int t,n,in,maxm,temp,temp1,temp2,fl;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%d",&arr[i][j]);
                if(i==0&&j==0) sum[i][j]=arr[i][j];
                else if(i==0) sum[i][j]=sum[i][j-1]+arr[i][j];
                else if(j==0) sum[i][j]=sum[i-1][j]+arr[i][j];
                else sum[i][j]=sum[i-1][j]+sum[i][j-1]+arr[i][j]-sum[i-1][j-1];
            }
        }

         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                printf("%d ",sum[i][j]);
            }
            printf("\n");
         }
    }
}
