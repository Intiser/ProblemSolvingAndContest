#include<iostream>
#include<stdio.h>

using namespace std;

long long int arr[25];

int main(){
    long long int n,maxm,st,temp,cs=1;
    while(cin>>n){
        for(int i=0;i<n;i++) cin>>arr[i];
        maxm=0;
        for(int i=0;i<n;i++){
            temp=arr[i];
                st=i+1;
                if(maxm<temp) maxm=temp;
            while(st<n){
                temp=temp*arr[st];
                st++;
                if(maxm<temp) maxm=temp;
            }
        }
        cout<<"Case #"<<cs<<": The maximum product is "<<maxm<<"."<<endl;
        cout<<endl;
        cs++;
    }

}
