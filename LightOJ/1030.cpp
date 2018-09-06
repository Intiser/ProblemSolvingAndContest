#include<stdio.h>

#define lli long long int

int vis[105];
lli arr[105];
double X[105];
int n;

double rec(int x){
    if( x == n){
        return X[x];
    }
    if(vis[x] == 1) return X[x];
    vis[x] = 1;
    double sm = 0;
    lli div = (n - x);
    if(div>6) div = 6;
    for(int i=x+1;i<=x+6&&i<=n;i++){
        sm  +=  ( ( (rec(i)+arr[x])*1.0) / div );
    }
    return X[x] = sm;

}


int main(){
    int t;
    int a,b;
    scanf("%d",&t);
    for(int cas = 1;cas<=t;cas++){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%lld",&arr[i]);
            X[i] = arr[i] * 1.0;
            vis[i] = 0;
        }

        printf("Case %d: %lf\n",cas,rec(1));
    }

}

