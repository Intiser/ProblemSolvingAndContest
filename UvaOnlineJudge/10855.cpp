#include<iostream>
#include<stdio.h>

using namespace std;

string arr[105];
string chk[105];
string tmp[105];
int an[105][105];
int temp[105][105];

void rot(int n){
    for(int i=n-1,k=0;i>=0;i--,k++){
        for(int j=0;j<n;j++){
            temp[j][k] = an [i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            an[i][j] = temp[i][j];
    }
}

int result(int t,int n){
    int cnt = 0;
    for(int i=0;i<t-n+1;i++){
        for(int j=0;j<t-n+1;j++){
            int fl = 0;
            for(int x=0,s=i;x<n;x++,s++){
                for(int y=0,p=j;y<n;y++,p++){
                    if(an[x][y]!=arr[s][p]){
                        fl = 1;
                        break;
                    }
                    //cout<<an[x][y]<<arr[s][p];
                }
                if(fl==1)
                    break;
                //cout<<endl;
            }
            if(fl==0)
                cnt++;
        }
    }
    return cnt;
}

void check(int A[][105],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%c",A[i][j]);
        printf("\n");
    }
}

int main(){
    int t,n;
    while(cin>>t>>n){
        if(t==0&&n==0) break;
        for(int i=0;i<t;i++)
            cin>>arr[i];
        for(int i=0;i<n;i++)
            cin>>chk[i];
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++){
                an[i][j] = chk[i][j] ;
            }
        int t1 = result(t,n);
        rot(n);
        int t2 = result(t,n);
        rot(n);
        int t3 = result(t,n);
        rot(n);
        int t4 = result(t,n);
        //check(an,n);
        //rot(n);
        //check(an,n);
        //rot(n);
        //check(an,n);
        //rot(n);
        //check(an,n);
        printf("%d",t1);
        printf(" %d",t2);
        printf(" %d",t3);
        printf(" %d\n",t4);


    }
}
