#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int arr[1005];
int flag[1005];

int main(){
    int n;
    int tmp,mx,cnt;
    cin>>n;
    //cin>>arr[0];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    sort(arr,arr+n);
    cnt = 0;
    mx = 1; tmp = 1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]){
            tmp++;
            if(tmp<=mx) cnt++;
        }
        else{
            cnt++;
            tmp = 1;
        }

        if(mx<tmp) mx =tmp;
    }
    cout<<cnt<<endl;
}
