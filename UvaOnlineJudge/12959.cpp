#include<iostream>
#include<stdio.h>

using namespace std;

int arr[1000];

int main(){
    int a,b,win,tot,x,mx;
    while(cin>>a>>b){
        tot = a*b;
        mx = 0;
        for(int i=0;i<tot;i++){
            scanf("%d",&x);
            arr[i%a] = arr[i%a] + x;
            if(arr[i%a]>=mx){
                mx = arr[i%a];
                win = i%a;
            }

        }
        cout<<win+1<<endl;
        for(int i = 0;i<a;i++)
            arr[i] = 0;
    }
}
