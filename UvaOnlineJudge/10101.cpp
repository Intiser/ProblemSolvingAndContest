#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long int cas=1,n,st,tmp,ml,kk,k;
    while(cin>>n){
        st= 0;
        tmp =n;
        kk = 0; k = 0;
        printf("%4lld. ",cas);
        if(tmp/100000000000000){
            ml  = tmp /  100000000000000;
            tmp = tmp %  100000000000000;
            st = 1;
            printf("%lld kuti",ml);

        }
        if(tmp/1000000000000){
            ml  = tmp /  1000000000000;
            tmp = tmp %  1000000000000;
            if(st == 1) cout<<" ";
            printf("%lld lakh",ml);
            st = 1;
        }
        if(tmp/10000000000){
            ml  = tmp /  10000000000;
            tmp = tmp %  10000000000;
            if(st == 1) cout<<" ";
            printf("%lld hajar",ml);
            st = 1;
        }
        if(tmp/1000000000){
             ml  = tmp /  1000000000;
            tmp = tmp %  1000000000;
            if(st == 1) cout<<" ";
            printf("%lld shata",ml);
            st = 1;
        }
        if(tmp/10000000){
            ml  = tmp /  10000000;
            tmp = tmp %  10000000;
            if(st == 1) cout<<" ";
            printf("%lld kuti",ml);
            st = 1;
            k = 1;
        }
        if(st == 1 && k== 0){
            cout<<" kuti";
        }
        if(tmp/100000){
            ml  = tmp /  100000;
            tmp = tmp %  100000;
            if(st == 1) cout<<" ";
            printf("%lld lakh",ml);
            st = 1;
        }
        if(tmp/1000){
            ml  = tmp /  1000;
            tmp = tmp %  1000;
            if(st == 1) cout<<" ";
            printf("%lld hajar",ml);
            st = 1;
        }
        if(tmp/100){
            ml  = tmp / 100;
            tmp = tmp % 100;
            if(st == 1) cout<<" ";
            printf("%lld shata",ml);
            st = 1;
        }
        if(tmp){
           if(st == 1) cout<<" ";
           cout<<tmp;
        }
        if(st==0) cout<<"0";
        cout<<endl;
        cas++;
    }
}
