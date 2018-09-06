#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define sccc(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define FOR(x,y) for(int x = 0;x<y;x++)
#define FORR(x,y) for(int x = 1;x<=y;x++)
#define prc(c) printf("Case %d:\n",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)

double funct(int stA,int stB,int enA,int enB){
    double ret = 1.0;
    int i=1,j=1,k=1;
    for(i=stA,j=stB;i<=enA&&j<=enB;i++,j++,k++){
        ret = ret * i;
        ret = ret / j;
    }
    if(i>enA){
        for(;j<=enB;k++,j++){
            ret = ret * k;
            ret = ret / j;
        }
    }
    if(j>enB){
        for(;i<=enA;k++,i++){
            ret = ret * i;
            ret = ret / k;
        }
    }
    return ret;
}

int maxm(int a,int b){
    if(a>b) return a;
    return b;
}

int main(){
    int p,q,r,s;
    int q1,s1;
    double ans;
    while(cin>>p>>q>>r>>s){
        q1 = maxm(q,p-q);
        s1 = maxm(s,r-s);
        ans = funct(q1+1,s1+1,p,r);
        printf("%.5lf\n",ans);
    }
}
