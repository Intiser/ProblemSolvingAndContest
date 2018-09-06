#include<iostream>
#include<stdio.h>

using namespace std;

int arr[150000];

int main(){
    int n,tmp,tot,in,c;
    while(cin>>n){
        arr[0]=1; in=1;
        for(int i=1;i<=n;i++){
                c=0;
            for(int j=0;j<in;j++){
                tmp=(arr[j]*i+c);
                arr[j]=tmp%10;
                c=tmp/10;
            }
            while(c>0){
                arr[in]=(c)%10;
                c=(c)/10;
                in++;
            }
        }
        tot=0;
        for(int i=0;i<in;i++) tot+=arr[i];
        cout<<tot<<endl;
       // for(int i=in-1;i>=0;i--) cout<<arr[i];
       // cout<<endl;
    }
}
