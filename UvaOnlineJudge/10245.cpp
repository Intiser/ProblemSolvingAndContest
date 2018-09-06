#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>

using namespace std;

#define lli long long int

pair<lli,lli>arr[11000];
lli inf;

double ret(int s,int e){
    if(s==e){
        return inf*1.0;
    }
    int x1 = arr[s].first;
    int x2 = arr[e].first;
    int y1 = arr[s].second;
    int y2 = arr[e].second;
    double dis = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    if(e==s+1){
        return dis;
    }
    int m = (s+e)/2;
    double d1 = ret(s,m);
    double d2 = ret(m+1,e);
    double d3 ,d4;
    if(d1==d2) d4 = inf*1.0;
    else d3 = min(d1,d2);
    double d  = min(dis,d3);
    return d;
}

int main(){
    inf = 40001*40001;
    //cout<<inf<<endl;
}
