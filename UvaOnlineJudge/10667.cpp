#include<iostream>
#include<stdio.h>

using namespace std;

int arr[200][200];
int sum[200][200];

int main(){
    int t,n,m,r1,r2,c1,c2,temp,maxm,in;
        cin>>t;
    while(t--){
        cin>>n;
        cin>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                arr[i][j]=1;

               // printf("yes\n");
        for(int i=0;i<m;i++){
            cin>>r1>>c1>>r2>>c2;
            //cout<<r1<<c1<<r2<<c2<<endl;
            for(int j=r1-1;j<r2;j++){

                for(int k=c1-1;k<c2;k++){
                    arr[j][k]=0;// printf("no ");
                    }
            }
           }

          // printf("yes\n");
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0) sum[i][j]=arr[i][j];
                else if(arr[i][j]==0) sum[i][j]=0;
                else sum[i][j]=sum[i-1][j]+arr[i][j];
                //cout<<sum[i][j]<<" ";
            }
            //cout<<endl;
         }

         maxm=0;
         for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                temp=sum[i][j];
                in=j+1;
                while(sum[i][j]<=sum[i][in]&&in<n) {
                    temp+=sum[i][j];
                    in++;
                }
                in=j-1;
                while(sum[i][j]<=sum[i][in]&&in>=0) {
                    temp+=sum[i][j];
                    in--;
                }

                if(maxm<temp) maxm=temp;
            }
         }
         cout<<maxm<<endl;
    }
}
