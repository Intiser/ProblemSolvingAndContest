#include<iostream>
#include<stdio.h>
#include<algorithm>
//#include<time.h>

using namespace std;

int arr[10010];

int main(){
    int in=0,med,one,two;
    while(scanf("%d",&arr[in])==1){
        if(in==0){
            med = arr[0];
        }
        else if(in==1){
            one = arr[0];
            two = arr[1];
            med = (arr[0]+arr[1])/2;
        }else if(in%2==0){
            if(arr[in]>=one&&arr[in]<=two){
                med = arr[in];
            }else if(arr[in]<one){
                med = one;
            }
            else
                med = two;

        }
        else{
            sort(arr,arr+in+1);
            one = arr[in/2];
            two = arr[in/2+1];
            med = (one+two)/2;
        }
        cout<<med<<endl;
        in++;
    }
}
