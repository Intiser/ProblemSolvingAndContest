#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;
#define lli long long int

pair<lli,lli> m[1000000];
lli arr[110000];

pair<lli,lli> maxfunct(pair<lli,lli>a,pair<lli,lli>b){
    lli ar[5];
    ar[0] = a.first;
    ar[1] = a.second;
    ar[2] = b.first;
    ar[3] = b.second;
    sort(ar,ar+4);
    pair<lli,lli>ans;
    ans.first = ar[3];
    ans.second = ar[2];
    return ans;
}

pair<lli,lli> init(int node,int st,int en){
    if(st==en){
        pair<lli,lli>p;
        p.first = arr[st];
        p.second = 0;
        m[node] = p;
        return p;
    }
    int mid = (st+en)/2;
    pair<lli,lli> t1 = init(node*2,st,mid);
    pair<lli,lli> t2 = init(node*2+1,mid+1,en);
    pair<lli,lli> tt = maxfunct(t1,t2);
    //cout<<tt.first<<" "<<tt.second<<endl;
    m[node] = tt;
    return tt;
}

pair<lli,lli> update(int node,int st,int en,int i,int x){
    if(en<i||st>i) return m[node];
    if(i==st&&i==en){
        pair<lli,lli>p;
        p.first = x;
        p.second = 0;
        m[node] = p;
        return p;
    }
    int mid = (st+en)/2;
    pair<lli,lli> t1 = update(node*2,st,mid,i,x);
    pair<lli,lli> t2 = update(node*2+1,mid+1,en,i,x);
    pair<lli,lli> tt = maxfunct(t1,t2);
    m[node] = tt;
    return tt;
}

pair<lli,lli> query(int node,int st,int en,int i,int j){
    if(en<i||st>j){
        pair<lli,lli>p;
        p.first = 0;
        p.second = 0;
        return p;
    }
    if(i<=st&&j>=en){
        return m[node];
    }
    int mid = (st+en)/2;
    pair<lli,lli> t1 = query(node*2,st,mid,i,j);
    pair<lli,lli> t2 = query(node*2+1,mid+1,en,i,j);
    pair<lli,lli> tt = maxfunct(t1,t2);
    return tt;
}

int main(){
    int n;
    int q;
    int x,y;
    char ch;
    while(scanf("%d",&n)==1){
            for(int i=1;i<=n;i++) scanf("%lld",&arr[i]);
            init(1,1,n);
            scanf("%d",&q);
            for(int i=0;i<q;i++){
                getchar();
                scanf("%c ",&ch);
                if(ch=='U'){
                    scanf("%d %d",&x,&y);
                    update(1,1,n,x,y);
                }
                else if(ch=='Q'){
                    scanf("%d %d",&x,&y);
                    pair<lli,lli> ans = query(1,1,n,x,y);
                    printf("%lld\n",ans.first+ans.second);
                }
            }
    }
}
