#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int arrM[11000];
int arrF[11000];
int Mcnt;
int Fcnt;

bool comp( const int &a,const int &b){
    return a>b;
}

int main(){
    int n,m;
    int cas = 1;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        for(int i=0;i<n;i++) cin>>arrM[i];
        for(int i=0;i<m;i++) cin>>arrF[i];
        sort(arrM,arrM+n,comp);
        sort(arrF,arrF+m,comp);
        //for(int i=0;i<n;i++) cout<<arrM[i]<<endl;
        Mcnt = n; Fcnt = m;
        int st = 0;
        for(int i=0;i<n&&st<m;i++){
            while(arrM[i]<=arrF[st]&&st<m){
                st++;
            }
            if(st==m) break;
            if(arrM[i]>arrF[st]){
                st++;
                Mcnt--;
                Fcnt--;
            }
            if(Fcnt==0) break;
        }
        int mrd = Mcnt - Fcnt;
        if(mrd>0){
            cout<<"Case "<<cas<<": "<<mrd<<" "<<arrM[n-1]<<endl;
        }
        else{
            mrd = 0;
            cout<<"Case "<<cas<<": "<<mrd<<endl;
        }
        cas++;
    }
}
