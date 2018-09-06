#include<iostream>
#include<stdio.h>

using namespace std;

int arr[25];
int val[25];
int res[25][25];

int rec(int i){
    if(i==0) return 1;
    int mx = 0;
    int u = arr[val[i]];
    for(int j=0;j<i;j++){
        int v = arr[val[j]];
        int ret = rec(j);
        //cout<<v<<" "<<u<<" "<<ret<<endl;
        if(v<u){
            //if(ret==0) ret = 1;
            //ret = ret + 1;
            mx = max(mx,ret);
        }
    }
    //if(mx==0) mx = 1;
    return mx+1;
}

int check(int n){
    int mx = 0;
    while(n--){
        int ret = rec(n);
        mx = max(mx,ret);
        //cout<<val[n]<<" "<<ret<<endl;

    }
    return mx;
}

int LIS(int n){
    int mx = 1;
    for(int i=1;i<n;i++){
        int m = 1;
        int u = arr[val[i]];
        for(int j=i-1;j>=0;j--){
            int v = arr[val[j]];
            if(u>v){
                m = max(m,res[i-1][j-1]+1);
                res[i][j] = res[i-1][j-1] + 1;
            }
            else
                res[i][j] = res[i-1][j-1];

        }
        mx = max(mx,m);
        res[i][i] = mx;
    }
    return mx;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a] = i;
    }
    while(cin>>val[0]){
        for(int i=1;i<n;i++){
            cin>>val[i];
        }
        cout<<check(n)<<endl;
    }

}
