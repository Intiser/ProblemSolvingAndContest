#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

int row[30][30];
int col[30][30];
int grid[30][30];
int sqt[30];

void clr(){
    for(int i=0;i<=25;i++){
        for(int j=0;j<=25;j++) {
            row[i][j] = 0;
            col[i][j] = 0;
            grid[i][j] = 0;
        }
    }
}

int main(){
    for(int i=1;i<=5;i++) sqt[i*i] = i;
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        int flag = 0;
        int tp = sqt[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a;
                row[i][a]++;
                col[j][a]++;
                int num = i/tp*tp+j/tp;
                grid[num][a]++;
                if(row[i][a]>1) flag = 1;
                if(col[j][a]>1) flag = 1;
                if(grid[num][a]>1) flag = 1;
            }
        }
        if(flag==0){
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
        clr();
    }
}
