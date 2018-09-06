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
                if(i==0) sum[i][j]=arr[i][j];
                else sum[i][j]=sum[i-1][j]+arr[i][j];
            }
        }
        maxm=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp=sum[i][j];
                in=j+1;
                if(in==n) in=0;
                while(in!=j){
                    temp=temp+sum[i][in];
                    in++;
                    if(in==n) in=0;
                    if(maxm<temp) maxm=temp;

                }
               /* fl=0;
                for(int k=0;k!=in;k++){
                        if(k==n) k=0;
                        if(fl==0) in=0;
                        fl=1;
                    temp1=temp1+sum[i][k];
                    temp2=temp2+sum[j][k];
                    temp=temp2-temp1;
                     if(temp<0){
                          temp=0; temp1=0; temp2=0;
                          in=k;
                     }
                     if(temp>maxm) maxm=temp;

                }*/
            }
        }
        cout<<maxm<<endl;
    }
}
