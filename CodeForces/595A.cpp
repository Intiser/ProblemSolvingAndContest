#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,m,a,b,cnt;
    while(cin>>n>>m){
            cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                scanf("%d%d",&a,&b);
                if(a==1||b==1) cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
