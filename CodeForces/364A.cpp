#include<iostream>
#include<stdio.h>
#include<queue>

using namespace std;

queue<int>q[150];
int arr[150];
int fl[150];

int main(){
    int n;
    cin>>n;
    int tot = 0;
    for(int i=1;i<=n;i++) {
        cin>>arr[i];
        tot = tot + arr[i];
        q[arr[i]].push(i);
    }
    int num = tot / (n/2);
    int st = 1;
    for(int i=0;i<n/2;i++,st++){
        while(fl[st]>0){
            st++;
            //cout<<st<<endl;
        }
        int s = q[arr[st]].front();
        q[arr[st]].pop();
        fl[s]++;
        int  t = q[num - arr[st]].front();
        q[num - arr[st]].pop();
        fl[t]++;

        cout<<s<<" "<<t<<endl;
    }
}
