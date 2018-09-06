#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;


int total(int n,int m,int pw){
    int p = 0;
    int tot = 0;
    int t = 1;
    while(pw>p){
        tot = tot + t;
        t = t*n;
        //cout<<t<<endl;
        p++;
    }
    //t = t*n;
    int tp = t;
    int tn = n;
    int ex = 0;
    //cout<<pw<<endl;
    //cout<<t<<endl;
    while(tp<m&&tn>0){
        tp = tp - 1;
        tp = tp + n;
        ex++;
        tn--;
    }
    //cout<<tot<<endl;
    if(tp==m){
        tot = tot + tp + ex;
        return tot;
    }
    return -1;
}


int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        if(n==1){
            if(m==1)
            printf("%d %d Multiple\n",n,m);
            else
            printf("%d %d Impossible\n",n,m);
        }
        else if(m<n){
            printf("%d %d Impossible\n",n,m);
        }
        else{
            int pw = floor(log(m)/log(n));
            int res = total(n,m,pw);
            //cout<<res<<endl;
            if(res==-1){
                printf("%d %d Impossible\n",n,m);
            }
            else{
                printf("%d %d %d\n",n,m,res);
            }
        }
    }
}
