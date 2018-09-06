#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

pair<int,int> arr[500010];

int main(){
    int n,tmp,x,y;
    while(cin>>n){
        for(int i=0;i<n;i++)
            scanf("%d%d",&arr[i].first,&arr[i].second);
        sort(arr,arr+n);
        tmp=0;
        for(int i=0;i<n;i++){
            x=arr[i].first;
            tmp=arr[i].second;
            i++
            while(x==arr[i].first){
                if(arr[i].second<tmp)
                    tmp=arr[i].second;
                i++;
            }


        }
    }
}
