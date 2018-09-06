#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

#define lli unsigned long long int
map<lli,lli> used;

lli funct(lli n){
    used.clear();
    if(n==1) return 1;
    if(n==2) return 3;
    if(n==3) return 5;
    lli tot = 0;
    lli a ,c = 1;
    lli b ,d = n;
    a = 2;   c  = 1;
    b = n/a; d  = n;
    int fl = 0;
    for( a=2;a*a<=n;a++){

            b = n/a;
            tot += (a-c)*d;
            tot += (d-b)*c;
            c = a;
            //used[a] = 1;
            //used[b] = 1;
            d = b;

        cout<<c<<" "<<d<<" "<<tot<<endl;
    }
    if(c*c==n){
            tot = tot + c;
            fl = 1;
    }
    else{
        tot = tot + c;
        tot = tot + c + 1;
    }
   /* if(c*d<n){
        for(;used[a]==0;a++){
            tot = tot + n/a;
        }

    }*/


   return tot;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<funct(n)<<endl;
    }
}
