#include<iostream>
#include<stdio.h>

using namespace std;

int arr[8];
int com[8];

int main(){
    while(cin>>arr[0]){
        for(int i=1;i<5;i++) scanf("%d",&arr[i]);
        for(int i=0;i<5;i++) scanf("%d",&com[i]);
        int cnt=0;
        for(int i=0;i<5;i++){
            if((arr[i]==0&&com[i]==1)||((arr[i]==1&&com[i]==0)))
                cnt++;
        }
        if(cnt==5) printf("Y\n");
        else printf("N\n");
    }
}
