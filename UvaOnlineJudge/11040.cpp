#include<iostream>
#include<stdio.h>

using namespace std;

int arr[11][11];

int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=1;i<=9;i+=2){
            for(int j=1;j<=i;j+=2){
                scanf("%d",&arr[i][j]);
            }
        }
        arr[9][2]=(arr[7][1]-(arr[9][1]+arr[9][3]))/2;
        arr[9][4]=(arr[7][3]-(arr[9][3]+arr[9][5]))/2;
        arr[9][6]=(arr[7][5]-(arr[9][5]+arr[9][7]))/2;
        arr[9][8]=(arr[7][7]-(arr[9][7]+arr[9][9]))/2;
        for(int i=8;i>1;i--){
            for(int j=1;j<=i;j++){
                if(i%2==0){
                    arr[i][j]=arr[i+1][j]+arr[i+1][j+1];
                }
                else if(j%2==0&&i%2==1){
                    arr[i][j]=arr[i+1][j]+arr[i+1][j+1];
                }
            }
        }
        for(int i=1;i<=9;i++){
            printf("%d",arr[i][1]);
            for(int j=2;j<=i;j++){
                 printf(" %d",arr[i][j]);
            }
            printf("\n");
        }
    }
}
