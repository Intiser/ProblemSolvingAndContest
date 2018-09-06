#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int

lli tenc[30010];
lli twec[30010];
lli fifc[30010];
lli oned[30010];
lli twod[30010];
lli fivd[30010];
lli tend[30010];
lli twed[30010];
lli fiftd[30010];
lli hund[30010];

lli funct(lli t,lli arr1[],lli arr2[]){
    lli cnt;
    for(lli i=5;i<=30000;i+=5){
       cnt=0;
       for(lli j=0;j*t<i;j++){
            cnt = cnt + arr1[i-(j*t)];
       }
       if(i%t==0) cnt++;
       arr2[i] = cnt;

    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    tenc[0] = 0;
    for(lli i=5;i<=30000;i+=5){
        tenc[i] = i/10+1;
    }
    lli tmp,tot,cnt;


    funct(20,tenc,twec);
    funct(50,twec,fifc);
    funct(100,fifc,oned);
    funct(200,oned,twod);
    funct(500,twod,fivd);
    funct(1000,fivd,tend);
    funct(2000,tend,twed);
    funct(5000,twed,fiftd);
    funct(10000,fiftd,hund);
    double val;
    int n;
    while(cin>>val){
        //cout<<tenc[n]<<endl;
        //cout<<twec[n]<<endl;
        n = val*100+0.5;

        if(n==0) break;
        //cout<<hund[n]<<" "<<n<<endl;
        printf("%6.2lf%17lld\n",val,hund[n]);
    }

}
