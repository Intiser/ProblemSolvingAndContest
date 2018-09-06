#include<iostream>
#include<stdio.h>

using namespace std;

int arr[105];
int flag[100000];

int main(){
    int n,cas=1,fl;
    while(cin>>n){
            for(int i=0;i<n;i++){
                scanf("%d",&arr[i]);
            }
            for(int i=0;i<100000;i++) flag[i] = 0;
            fl = 0;
            if(arr[0]<1) fl=1;
            else
            for(int i=0;i<n-1;i++){
                if(arr[i]>=arr[i+1]) fl=1;
                if(fl == 1) break;
                for(int j=i;j<n;j++){
                    flag[arr[i]+arr[j]]++;
                    if(flag[arr[i]+arr[j]]==2){
                        fl = 1;
                        break;
                    }
                }
                if(fl == 1) break;
            }



        if(fl==0){
            printf("Case #%d: It is a B2-Sequence.\n",cas);
        }
        else {
            printf("Case #%d: It is not a B2-Sequence.\n",cas);
        }
        cas++;
        cout<<endl;

    }
}
