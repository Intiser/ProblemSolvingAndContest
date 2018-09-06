#include<iostream>
#include<stdio.h>

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
#define lli long long int


lli funct(int st,int en){
    lli tot = 1;
    for(int i=st,j=1;i<=en;i++,j++){
        tot = tot * i;
        tot = tot / j;
    }
    return tot;
}

int main(){
    int n;
    int st = 0;
    while(cin>>n){
            if(st==1) printf("\n");
        lli ans;
        ans = funct(n+1,2*n);
        ans = ans / (n+1);
        cout<<ans<<endl;
        st = 1;
    }
}
