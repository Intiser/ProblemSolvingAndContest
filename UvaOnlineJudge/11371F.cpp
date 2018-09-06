#include<iostream>
#include<stdio.h>

using namespace std;

#define lli long long int

int flag[11];

lli rev(lli t){
    lli tmp = 0;
    while(t/10){
        tmp = tmp*10 + t%10;
        t = t/10;
    }
    tmp = tmp*10 + t;
    return tmp;
}

void flager(lli t){
    while(t/10){
        flag[t%10]++;
        t = t/10;
    }
    flag[t%10]++;
}

void clr(){
    for(int i=0;i<=9;i++) flag[i] = 0;
}

lli maxmer(){
    lli tmp = 0;
    for(int i=9;i>=0;i--){
        while(flag[i]>0){
            tmp = tmp * 10 + i;
            flag[i]--;
        }
    }
    return tmp;
}

lli minimer(){
    lli tmp = 0;
    for(int i=1;i<=9;i++){
        if(flag[i]){
            tmp = i;
            flag[i]--;
            break;
        }
    }
    while(flag[0]){
        tmp = tmp * 10 ;
        flag[0]--;
    }

    for(int i=0;i<=9;i++){
        while(flag[i]>0){
            tmp = tmp * 10 + i;
            flag[i]--;
        }
    }
    return tmp;
}

lli dif(lli n){
    lli a,b;
    flager(n);
    a = maxmer();
    flager(n);
    b = minimer();
    lli difr  = a - b;
    cout<<a<<" - "<<b<<" = "<<difr<<" = 9 * "<<difr/9<<endl;
    clr();
}

void print(){
    for(int i=0;i<=9;i++) cout<<flag[i]<<" ";
    cout<<endl;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    lli n,m;
    while(cin>>n){
        //cout<<rev(n)<<endl;
        //m = rev(n);
        //flager(n);
        //print();
        dif(n);
    }
}
