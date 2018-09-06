#include<iostream>
#include<stdio.h>

using namespace std;

int fx(int n){
    int tp = 0;
    while(n/10){
        tp += n%10;
        n  = n/10;
    }
    tp = tp + n;
    return tp;
}

int funct(string s, int pos,int m){
    int tmp = 0;
    tmp = tmp + fx(m*(s[pos] - '0'));
    tmp = tmp + fx(m*(s[pos+2] - '0'));
    return tmp;

}

int main(){
    int n,t1,t2,tot;
    string a,b,c,d;
    cin>>n;
    while(n--){
        cin>>a>>b>>c>>d;
        t1  = funct(a,0,2);
        t1 += funct(b,0,2);
        t1 += funct(c,0,2);
        t1 += funct(d,0,2);

        t2  = funct(a,1,1);
        t2 += funct(b,1,1);
        t2 += funct(c,1,1);
        t2 += funct(d,1,1);

        tot  = t1 + t2;
        //cout<<tot<<" "<<t1<<" "<<t2<<endl;
        if(tot%10==0) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }
}
