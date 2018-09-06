#include<iostream>
#include<stdio.h>

using namespace std;
#define lli long long int

lli m[1000000];
lli arr[110000];

lli init(int node,int st,int en){
    if(st==en){
        m[node] = arr[st];
        return m[node];
    }
    int mid = (st+en)/2;
    lli t1 = init(node*2,st,mid);
    lli t2 = init(node*2+1,mid+1,en);
    m[node] = t1 + t2;
    return m[node];
}

lli update(int node,int st,int en,int i,int x,int op){
    if(en<i||st>i) return 0;
    if(i==st&&i==en){
        if(op==1){
            int t = m[node];
            m[node] = 0;
            return -t;
        }
        else {
            m[node] += x;
            return x;
        }
    }
    lli t1 = update(node*2,st,(st+en)/2,i,x,op);
    lli t2 = update(node*2+1,(st+en)/2+1,en,i,x,op);
    lli tt = t1 + t2;
    m[node] += tt;
    return tt;
}

lli query(int node,int st,int en,int i,int j){
    if(st>j||en<i) return 0;
    if(st>=i&&en<=j) return m[node];
    int mid = (st+en) / 2;
    lli t1 = query(node*2,st,mid,i,j);
    lli t2 = query(node*2+1,mid+1,en,i,j);
    lli tt = t1 + t2;
    return tt;
}

void prt(int node,int st,int en){
    if(st==en){
        cout<<m[node]<<endl;
        return ;
    }
    int mid = (st+en)/2;
    prt(node*2,st,mid);
    prt(node*2+1,mid+1,en);

}

int main(){
    int t;
    int n,q;
    int x,y,w;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d %d",&n,&q);
        for(int i=1;i<=n;i++) scanf("%lld",&arr[i]);
        init(1,1,n);
        printf("Case %d:\n",cas);
        for(int i=0;i<q;i++){
            scanf("%d",&w);
            if(w==1){
                scanf("%d",&x);
                //cout<<-1*update(1,1,n,x+1,0,1)<<endl;;
                printf("%lld\n",-1*update(1,1,n,x+1,0,1));
            }
            else if(w==2){
                scanf("%d %d",&x,&y);
                update(1,1,n,x+1,y,2);
            }
            else if(w==3){
                scanf("%d %d",&x,&y);
                //cout<<query(1,1,n,x+1,y+1)<<endl;
                printf("%lld\n",query(1,1,n,x+1,y+1));
            }
           // prt(1,1,n);
        }
    }
}
