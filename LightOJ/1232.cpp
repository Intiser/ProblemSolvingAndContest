/***********Template Starts Here***********/
#include <bits/stdc++.h>



//#define ahsan0045

int coin[101];
int n;
int mod;

int dp1[10001];


int main(){
    #ifdef ahsan0045
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    int t;

    mod = 100000007;

    int k;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%d %d",&n,&k);
        for(int i=0;i<n;i++){
            scanf("%d",&coin[i]);
        }
        memset(dp1,0,sizeof(dp1));


        dp1[0] = 1;
        for(int i=0;i<n;i++){
            for(int j=coin[i];j<=k;j++){
                dp1[j] +=  dp1[j-coin[i]];
                if(dp1[j]>mod)dp1[j] %= mod;
            }
        }
        printf("Case %d: %d\n",cas,dp1[k]);


    }

}




