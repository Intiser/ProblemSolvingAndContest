#include<stdio.h>
#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

queue<int> q;
queue<int> p;

int arr[150];
int fl[150];

int findout(int in){
    int frnt=-1;
    int crnt=0;
    int step = 0;
    while(crnt==0){
        frnt = q.front();
        crnt = p.front();
        q.pop(); p.pop();
        if(frnt==arr[in]){
            in--;
            step++;
        }
        else{
            q.push(frnt);
            p.push(crnt);
            crnt = 0;
        }

    }
    return step;
}

int main(){
    int t;
    int n,m,a,mx;
    cin>>t;
    while(t--){
        cin>>n>>m;
        fl[m] = 1;
        mx = 0;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
            q.push(arr[i]);
            p.push(fl[i]);
            fl[i] = 0;
        }
        sort(arr,arr+n);
        int res = findout(n-1);
        cout<<res<<endl;
        while(!q.empty()) q.pop();
        while(!p.empty()) p.pop();
    }
}
