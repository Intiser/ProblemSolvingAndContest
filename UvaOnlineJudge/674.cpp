#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

#define lli long long int

lli fivc[30010];
lli tenc[30010];
lli twfc[30010];
lli fifc[30010];


lli funct(lli t,lli arr1[],lli arr2[]){
    lli cnt;
    for(lli i=1;i<=30000;i++){
       cnt=0;
       for(lli j=0;j*t<i;j++){
            cnt = cnt + arr1[i-(j*t)];
       }
       if(i%t==0) cnt++;
       arr2[i] = cnt;

    }
}
int main(){

    fivc[0] = 0;
    for(lli i=1;i<=30000;i++){
        fivc[i] = i/5+1;
    }
    lli tmp,tot,cnt;

    funct(10,fivc,tenc);
    funct(25,tenc,twfc);
    funct(50,twfc,fifc);



    int n;
    while(cin>>n){
       cout<<fifc[n]<<endl;

    }

}
