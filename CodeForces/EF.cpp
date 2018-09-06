#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
#define lli long long int


lli arr[51000];
lli m[510000];

lli init(int in,int st,int en){
    if(st==en){
        m[in] = arr[st];
        return m[in];
    }
    int mid =(st+en)/2;
    lli t1 = init(in*2,st,mid);
    lli t2 = init(in*2+1,mid+1,en);
    lli tt;
    if(t1>t2){
        tt = t1;
        if(tt+t2>tt) tt =  tt + t2;
    }
    else{
        tt = t2;
        if(tt + t1 > tt) tt = tt + t1;
    }
    m[in] = tt;
    return tt;
}

lli query(int in,int st,int en,int i,int j){
    if(st>j||en<i) return -160000;
    if(st>=i&&en<=j) return m[in];
    int mid = (st+en)/2;
    lli t1 = query(in*2,st,mid,i,j);
    lli t2 = query(in*2+1,mid+1,en,i,j);
    lli tt ;
    if(t1>t2){
        tt = t1;
        if(tt+t2>tt) tt =  tt + t2;

    }
    else{
        tt = t2;
        if(tt + t1 > tt) tt = tt + t1;
    }
    return tt;
}

int main(){
    int n,q;
    int x,y;
    while(cin>>n){
        for(int i=1;i<=n;i++) cin>>arr[i];
        init(1,1,n);
        cin>>q;
        for(int i=0;i<q;i++){
            cin>>x>>y;
            cout<<query(1,1,n,x,y)<<endl;
        }
    }
}
