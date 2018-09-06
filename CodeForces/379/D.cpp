#include<iostream>
#include<stdio.h>
#include<cmath>

using namespace std;

#define lli long long int



struct values{
    lli x;
    lli y;
    lli fl;
    lli yes;
}ds[10];

int getdir(lli x,lli y,lli u,lli v){
    if(x==u&&y<v) return 0;
    if(x==u&&y>v) return 1;
    if(x<u&&y==v) return 2;
    if(x>u&&y==v) return 3;
    if(x>u&&y<v) return 4;
    if(x>u&&y>v) return 5;
    if(x<u&&y>v) return 6;
    if(x<u&&y<v) return 7;
    return -1;
}

void comp(lli x,lli y ,lli u, lli v, lli type){
    int fl =  getdir(u,v,x,y);
    //cout<<fl<<endl;
    if(fl==0){
       if(ds[fl].y > y||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
       }
    }
    else if(fl==1){
        if(ds[fl].y < y||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
       }
    }
    if(fl==2){
        if(ds[fl].x > x||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
       }
    }
    if(fl==3){
            if(ds[fl].x < x||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
            }
    }
    if(fl==4){
        if(ds[fl].x<x&&ds[fl].y>y||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
        }
    }
    if(fl==5){
        if(ds[fl].x<x&&ds[fl].y<y||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
        }
    }
    if(fl==6){
        if(ds[fl].x>x&&ds[fl].y<y||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
        }
    }
    if(fl==7){
        if(ds[fl].x>x&&ds[fl].y>y||ds[fl].fl == 0) {
            ds[fl].x = x;
            ds[fl].y = y;
            ds[fl].yes = type;
            ds[fl].fl = 1;
        }
    }
}



int main(){
    for(int i=0;i<8;i++){
            ds[i].fl = 0;
            ds[i].yes = 0;
            //cout<<ds[i].fl <<" "<<ds[i].yes<<" "<<i<<endl;
    }
    int n,m,k;
    int t;
    lli x,y;
    lli u,v;
    char c;
    int fl = 0;
    //freopen("cin.txt","r",stdin);
    //freopen("cout.txt","w",stdout);
    while(cin>>t){
        cin>>x>>y;
        fl = 0;
        for(int i=0;i<t;i++){
            cin>>c>>u>>v;
            int in = getdir(x,y,u,v);
            //cout<<in<<endl;
            if(in==-1){
                continue;
            }
            else if(c=='R'){
                if(in>=0&&in<=3){
                    comp(u,v,x,y,1);
                }
                else if(in>=4&&in<=7) {
                    comp(u,v,x,y,0);
                }
            }
            else if(c=='B'){
                if(in>=4&&in<=7){
                    comp(u,v,x,y,1);
                }
                else if(in>=0&&in<=3){
                    comp(u,v,x,y,0);
                }
            }
            else if(c=='Q'){
                if(in>=0&&in<=7)
                comp(u,v,x,y,1);
            }
        }
        for(int i=0;i<8;i++) if(ds[i].yes) fl = 1;
        if(fl==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        for(int i=0;i<8;i++){
            ds[i].fl = 0;
            ds[i].yes = 0;
            //cout<<ds[i].fl <<" "<<ds[i].yes<<" "<<i<<endl;
        }
    }
}



