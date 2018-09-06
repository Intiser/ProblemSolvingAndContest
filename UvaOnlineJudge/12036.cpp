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
#define prc(c) printf("Case %d: ",c)
#define pr(c) printf("%d\n",c)
#define prl(c) printf("%lld\n",c)
#define lli long long int

int arr[200][200];
int f[200];

void clr(){
    FOR(i,110) f[i] = 0;
}

int main(){
    int t;
    int n;
    sc(t);
    FORR(cas,t){
        sc(n);
        int pos = 0;
        FOR(i,n){
            FOR(j,n){
                sc(arr[i][j]);
                f[arr[i][j]]++;
                if(f[arr[i][j]]>n) pos = 1;
            }
        }
        prc(cas);
        if(pos==0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        clr();
    }
}
