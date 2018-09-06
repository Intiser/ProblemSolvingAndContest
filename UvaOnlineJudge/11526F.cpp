#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string.h>

using namespace std;

typedef long long vlong;
typedef unsigned long long uvlong;

#define sc(x) scanf("%d",&x)
#define scl(x) scanf("%lld",&x)
#define scc(x,y) scanf("%d %d",&x,&y)
#define sccl(x,y) scanf("%lld %lld",&x,&y)
#define sccc(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define scccl(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define prc(c) printf("Case %d: ",c)
#define prn(c) printf("Case %d:\n",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)
#define lli long long int
#define FORL(x,y,z) for(int x = y ; x<z ; x++)
#define FORE(x,y,z) for(int x = y ; x<=z; x++)
#define ROFE(x,y,z) for(int x = y ; x>=z; x--)


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    vlong n;
    sc(t);
    while(t--){
        cin>>n;
        if(n<1){
            cout<<0<<endl;
            continue;
        }
        vlong tot = 0;
        vlong lst = n;
        vlong pst = 0;
        vlong i = 1;
        vlong len = (lli)sqrt(n);
        vlong d = lst;
        for( i=1;i<=len;i++){
            d = lst;
            pst = n/i;
            tot = tot + pst;
            tot = tot + (lst-pst)*(i-1);
            lst = pst;
        }
        //cout<<lst<<" "<<i-1<<" "<<tot<<" "<<d<<endl;
        if(lst>len) {
            tot = tot + len*(lst-len);
        }
        cout<<tot<<endl;
    }
}



