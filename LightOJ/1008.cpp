#include<bits/stdc++.h>
#include<iostream>

using namespace std;

#define lli long long int

lli n;


int main(){
    int t;
    lli r,c;
    scanf("%d",&t);
    for(int cas=1;cas<=t;cas++){
        scanf("%lld",&n);
        lli sq = floor( sqrt(n) );
        r = 0;
        c = 0;
        if(sq%2==1){
            r = sq; c = 1;
        }
        else {
            c = sq; r = 1;
        }
        if(sq*sq != n){
            lli tmp = n - sq * sq;
            if(sq%2 == 1) {
                r = sq + 1;
                tmp--;
                if(tmp>sq){
                  c += sq;
                  tmp = tmp - sq;
                  r  -= tmp;
                }
                else
                  c += tmp;


            }
            else {
                c = sq + 1;
                tmp--;
                if(tmp>sq){
                    r  += sq;
                    tmp = tmp - sq;
                    c  -= tmp;
                }
                else
                  r += tmp;
            }

        }
        printf("Case %d: %lld %lld\n",cas,c,r);

    }
}
