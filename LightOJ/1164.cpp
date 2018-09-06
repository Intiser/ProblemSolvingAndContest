#include <bits/stdc++.h>


using namespace std;

//#define ahsan0045

#define lli long long int
struct node{
    lli sum;
    lli lazy;
    node(){
    lazy = 0;
    };
    node(int a){
        sum = a;
        lazy = 0;
    }
}tree[4*111111];


void init(int s,int e,int ind){
    tree[ind].lazy = 0;
    if(s == e){
        tree[ind].sum = 0;
        return ;
    }
    int  m = (s + e )/2;
    init(s,m,2*ind);
    init(m+1,e,2*ind+1);
    tree[ind].sum = tree[2*ind].sum + tree[2*ind+1].sum;

}


void update_node(int ind,int s,int e,lli val){
    tree[ind].sum += (e-s+1)*val;
    tree[ind].lazy += val;
    //tree[ind].sum
}

void update_lazy(int ind,int s,lli e){
        int m = (s+e) / 2;
        update_node(2*ind,s,m,tree[ind].lazy);
        update_node(2*ind+1,m+1,e,tree[ind].lazy);
        tree[ind].sum = tree[ind*2].sum + tree[ind*2 + 1].sum;
        tree[ind].lazy = 0;
}


void update(int ind,int s,int e,int st,int en,lli val){
        if(s > en || e < st) return ;
        if(s>=st && e <= en) {
            update_node(ind,s,e,val);
            return ;
        }
        if(tree[ind].lazy)
            update_lazy(ind,s,e);
        int  m = (s+e)/2;
        update(2*ind,s,m,st,en,val);
        update(2*ind+1,m+1,e,st,en,val);
        tree[ind].sum = tree[ind*2].sum + tree[ind*2 + 1].sum;
}


lli query(int ind,int s,int e,int st,int en){
        if(s > en || e < st) return 0;
        if(s>=st && e <= en) {
                return tree[ind].sum;
        }
        if(tree[ind].lazy)
            update_lazy(ind,s,e);
        int m = (s + e) / 2;
        lli r1 = query(2*ind,s,m,st,en);
        lli r2 = query(2*ind+1,m+1,e,st,en);
        return r1 + r2;
}


int main(){
    #ifdef ahsan0045
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    int t;
    int n;
    int q;
    //mod = 100000007;
    int a,b,c;
    lli d;
    lli ans = 0;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d %d",&n,&q);
        init(1,n,1);
        printf("Case %d:\n",cas);
        for(int i=0;i<q;i++){
            scanf("%d %d %d",&a,&b,&c);

            if( a == 0){
                scanf("%lld",&d);
                update(1,1,n,b+1,c+1,d);
            }
            else{
                ans = query(1,1,n,b+1,c+1);
                printf("%lld\n",ans);
            }

        }
        //printf("Case %d: %d\n",cas,cnt);

    }

}







