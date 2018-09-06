#include<iostream>
#include<stdio.h>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

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

inline lli power ( lli a, lli p ) {
    lli res = 1, x = a;
    while ( p ) {
        if ( p & 1 ) res = ( res * x );
        x = ( x * x ); p >>= 1;
    }
    return res;
}

int arr[1000010];
int freq[1000010];
int flag[1000010];

int main(){
    for(int i=0;i<1000000;i++) freq[i];

    int n;
    int x;
    int a = 0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    lli cnt =  0;
    int r;
    for(int i=0;i<n;i++){
        r = arr[i] ^ x;
        cnt = cnt + freq[r];
        if(arr[i]==r) cnt--;

    }
    cout<<cnt/2<<endl;

}

