#include<iostream>
#include<stdio.h>

using namespace std;

int arr[100010];
int main()
{
    int t,n,mnm,mst;
    cin>>t;
    while(t--){
        cin>>n;
        mnm=0;mst=0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(i==0)mst=arr[i];
            if(mst<arr[i])mst=arr[i];
            if(i==1) mnm=arr[0]-arr[1];
            if(i>1&&mnm<mst-arr[i]&&mst!=arr[i]) mnm=mst-arr[i];
        }
        cout<<mnm<<endl;
    }
}
