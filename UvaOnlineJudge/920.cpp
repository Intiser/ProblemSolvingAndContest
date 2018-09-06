#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

pair<int,int> arr[110];

int main(){
    int cas,n,temp,temX,temY;
    double tot,tmp,A,B,a,b,raw,nw;
    cin>>cas;
    while(cas--){
        cin>>n;
        for(int i=0;i<n;i++)
            scanf("%d%d",&arr[i].first,&arr[i].second);
        sort(arr,arr+n);
        tot=0; temp=0;
        for(int i=n-1;i>=0;i--){
            if(i==n-1){
                temp=arr[i].second;
                temX=arr[i].first;
                temY=arr[i].second;
            }
            else if(temp<arr[i].second){
                A=sqrt((arr[i].first-arr[i+1].first)*(arr[i].first-arr[i+1].first)*1.0+(arr[i].second-arr[i+1].second)*(arr[i].second-arr[i+1].second)*1.0);
                B=arr[i].second-arr[i+1].second;
                b=temp-arr[i+1].second;
                raw=(A/B)*b;
                nw=A-raw;
                tot+=nw;
                temX=arr[i].first;
                temY=arr[i].second;
                temp=arr[i].second;
            }
        }
        printf("%.2lf\n",tot);
    }
}
