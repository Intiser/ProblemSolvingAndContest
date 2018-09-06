#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<queue>

using namespace std;

queue<int> q;
int arr[20];

int chck(int k){
    int fl = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        if(u>k) fl = 1;
    }
    if(fl==1) return -1;
    return 1;
}

int main(){

    for(int k=1;k<14;k++){
        for(int i=1;i<=2*k;i++) q.push(i);
        //int l = q.size();
        //cout<<l<<endl;
        for(int j = 1;;j++){
            for(int i=1;i<=2*k;i++) q.push(i);
            int cnt = 0;
            while(q.size()>k){
                int u = q.front();
                q.pop();
                cnt++;
                if(cnt==j) {
                    cnt = 0;
                }
                else
                    q.push(u);
            }
            int flag = chck(k);
            if(flag==1){
                cout<<j<<endl;
                arr[k]  = j;
                break;
            }
        }

    }
    int k;
    while(cin>>k){
        if(k==0)
            cout<<arr[k]<<endl;
    }
}
