#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int arr[100000];
int sum[100000];
int vis = 0;

int left(int now){
    return now*2+1;
}

int right(int now){
    return now*2+2;
}

void store(int l,int r,int nod){
    if(l==r) {
        sum[nod] = arr[l];
        return;
    }
    //cout<<l<<" "<<r<<endl;
    int m = (l+r)/2;
    store(l,m,left(nod));
    store(m+1,r,right(nod));
    sum[nod] = sum[left(nod)] + sum[right(nod)];
    //cout<<l<<" "<<r<<endl;
    //cout<<sum[nod]<<endl;
}

void scan(int n){
    for(int i=0;i<n;i++) cin>>arr[i];
}

void arrc(int n){
    cout<<arr[0];
    for(int i=1;i<n;i++) cout<<" "<<arr[i];
    cout<<endl;
}
int sumof(int l,int r,int nod,int lf,int rg){
   vis++;
    if(l==r&&lf<=l&&r<=rg) return sum[nod];
    else if(l==r) return 0;

    if(l==lf&&r==rg) return sum[nod];
    if(l>lf&&r<rg) return sum[nod];
    if(r<lf) return 0;
    if(l>rg) return 0;
    int ret = 0;
    int m = (l+r)/2;
    ret = ret + sumof(l,m,left(nod),lf,rg);
    ret = ret + sumof(m+1,r,right(nod),lf,rg);
    return ret;
}

int main(){
    int n,q,a,b;
    freopen("int.txt","r",stdin);
    cin>>n;
    scan(n);
    store(0,n-1,0);
    arrc(n);
    while(cin>>a>>b){
        vis = 0;
        cout<<sumof(0,n-1,0,a-1,b-1)<<endl;
        cout<<"Visited : "<<vis<<endl;
    }
}
