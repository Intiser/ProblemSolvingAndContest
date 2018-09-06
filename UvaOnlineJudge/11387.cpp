#include<iostream>
#include<stdio.h>

using namespace std;

int f[150];

int main(){

    int n;
    while(cin>>n){
        if(n==0) break;
        if(n<=3||n%2==1){
            cout<<"Impossible"<<endl;
        }
        else{
            cout<<(n*3)/2<<endl;
            for(int i=1;i<=n;){
                if(f[i]<3){
                    for(int j=i+1;j<=n;j++){
                        if(f[i]<3&&f[j]<3&&i!=j){
                            f[i]++;
                            f[j]++;
                            cout<<i<<" "<<j<<endl;
                        }
                        if(f[i]==3) i++;
                        if(i==n) break;
                        //cout<<i<<endl;
                    }
                }
                if(i==n) break;
            }
            for(int i=0;i<=n;i++) f[i] = 0;
        }
    }

}
