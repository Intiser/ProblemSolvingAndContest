#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

lli number(lli n){
    return (n*(n+1))/2;
}

lli result(lli tm){
    lli tot = number(tm%10);
    lli t = number(9);
    lli m = tm;
    while(m/10){
        tot = tot + t*(m/10);
        m = m/10;
        tot = tot + number(m%10);
    }
    //if(tm!=m)
    //tot = tot + number(m);
    //cout<<m<<endl;
    return tot;
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli x,y;
    while(cin>>x>>y){
        if(x<=-1&&y<=-1) break;
        lli t2,t1;
        t2 = result(y);
        if(x>0)
        t1 = result(x-1);
        else
        t1 = 0;
        cout<<t2 - t1<<endl;
    }
}
