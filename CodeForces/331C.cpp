#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

pair<int,int> arr[100010];
int flag[100010];
int neg[100010];
int fl[100010];
int ng[100010];
//vector<int> ind[100010];
//vector<int> din[100010];
//int flag[100010];
//int neg[100010];

int main(){
    int n,s,cnt,x[100010];
    while(cin>>n){
        for(int i=0;i<n;i++){
            scanf("%d%d",&arr[i].first,&arr[i].second);
            s=arr[i].second-arr[i].first;

            if(s>=0){
                fl[s]++;
                flag[s]=i;
            }
            else {
                ng[-s]++;
                neg[-s]=i;
            }
        }
        cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d",&x[i]);
            if(x[i]>=0){
                if(fl[x[i]]){
                    cnt++;
                    fl[x[i]]--;
                }
            }
            else{
                if(ng[-x[i]]){
                cnt++;
                ng[-x[i]]--;
            }
            }
        }
        if(cnt==n){
            printf("YES\n");
            for(int i=0;i<n;i++){
               if(x[i]>=0){
                printf("%d %d\n",arr[flag[x[i]]].first,arr[flag[x[i]]].second);
               }
               else{
                printf("%d %d\n",arr[neg[-x[i]]].first,arr[neg[-x[i]]].second);
               }
            }
        }
        else{
            printf("NO\n");

        }

    }
}
