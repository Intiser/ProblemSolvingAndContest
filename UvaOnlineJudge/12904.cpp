#include<iostream>
#include<stdio.h>

using namespace std;

int arr[200];
int fre[200];

double abs(double a,double b){
    if(a>b) return a - b;
    return b - a;
}

void init(){
    for(int i=0;i<=160;i++){
        arr[i] = 0;
        fre[i] = 0;
    }
}

void print(){
    for(int i=0;i<=160;i++){
        if(arr[i]) cout<<i<<" "<<arr[i]<<endl;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int a,b,c;
    int val;
    int n;
    int t;
    cin>>t;
    for(int cas = 1;cas<=t;cas++) {
        cin>>n;
        init();
        for(int i=0;i<n;i++) {
            cin>>val;
            arr[val]++;
        }
        fre[0] =arr[0];
        for(int i=1;i<=160;i++) fre[i] = arr[i] + fre[i-1];
        double avg = n*1.0 / 4;
       int p,q,r,s;
       double tot;
       double mn = 100000;
       for(int i=0;i<=160;i++){
            for(int j=i+1;j<=160;j++){
                for(int k=j+1;k<=160;k++){
                     p = fre[i];
                     q = fre[j] - fre[i];
                     r = fre[k] - fre[j];
                     s = fre[160] - fre[k];
                     tot = abs(p*1.0,avg);
                     tot = tot + abs(q*1.0,avg);
                     tot = tot + abs(r*1.0,avg);
                     tot = tot + abs(s*1.0,avg);
                     if(tot<mn){
                        mn = tot;
                        a = i;
                        b = j;
                        c = k;
                     }
                }
            }
       }

        cout<<"Case "<<cas<<": "<<a<<" "<<b<<" "<<c<<endl;
        //print();
    }
}
