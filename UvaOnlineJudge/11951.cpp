#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>

using namespace std;

long long int arr[150][150];
long long int sum[150][150];
long long int Area[10010];


int main(){
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);

    long long int t,n,m,K,temp,maxm,area,in,ta,temp1;
    cin>>t;
    for( int x=1;x<=t;x++){
        cin>>n>>m>>K;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                scanf("%lld",&arr[i][j]);
                if(i==1) sum[i][j]=arr[i][j];
                else sum[i][j]=sum[i-1][j]+arr[i][j];
            }
        }
        maxm=K+1; area=0,ta=0;
        for(int i=1;i<=n;i++){
            for(int k=1;k<=i;k++){
                for(int j=1;j<=m;j++){
                    if(k==i){
                        temp=sum[i][j];
                        in=j+1;
                        ta=(i)*1;
                        if(Area[ta]!=0){
                            if(Area[ta]>temp) Area[ta]=temp;
                        }else {
                                Area[ta]=temp;
                           }
                        while(in<=m){
                            temp+=sum[i][in];
                            in++;
                            ta=(i)*(in-j);
                            if(Area[ta]!=0){
                                if(Area[ta]>temp) Area[ta]=temp;
                           }
                           else {
                                Area[ta]=temp;
                           }
                        }
                    }
                    else{
                        temp=sum[i][j]-sum[k][j];
                        in=j+1;
                        ta=(i-k);
                            if(Area[ta]!=0){
                                if(Area[ta]>temp) Area[ta]=temp;
                           }
                           else {
                                Area[ta]=temp;
                           }
                        while(in<=m){
                            temp1=sum[i][in]-sum[k][in];
                            temp+=temp1;
                            in++;
                            ta=(i-k)*(in-j);

                            if(Area[ta]!=0){
                                if(Area[ta]>temp) Area[ta]=temp;
                           }else {
                                Area[ta]=temp;
                           }
                           // cout<<i<<" "<<k<<" "<<in<<" "<<j<<" "<<ta<<" "<<Area[ta]<<endl;
                        }
                    }
                }
            }
        }
        maxm=0; area=0;
        for(int i=1;i<10010;i++){
            if(Area[i]!=0){
                if(Area[i]<=K) {area=i;
                maxm=Area[i];
                }
            }
            Area[i]=0;
        }

        printf("Case #%lld: %lld %lld\n",x,area,maxm);
    }
}
