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
#define lli long long int

int res(lli val,int pl,lli tgt){
    if(tgt<=val){
        return 3-pl;
    }
    int fl = 0;
    int r;
    r = res(val*2,3-pl,tgt);
    if(r==pl) return pl;
    r = res(val*9,3-pl,tgt);
    if(r==pl) return pl;
    return 3-pl;
}

int main(){
    lli n;
    int ans;
    while(cin>>n){
        ans = res(1,1,n);
        if(ans==1) cout<<"Stan wins."<<endl;
        else cout<<"Ollie wins."<<endl;
    }
}
