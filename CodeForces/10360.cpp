#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

#define lli long long int

lli minX,minY,maxX,maxY,ok,ansX,ansY,ansC;
lli arr[10005][10005];
lli sum[10005][10005];
lli pot[10005][10005];

lli sumis(){
    for(lli i=minX;i<=maxX;i++){
        for(lli j=minY;j<=maxY;j++){
            if(j==minY) sum[i][j] = arr[i][j];
            else
                sum[i][j] = sum[i][j-1] + arr[i][j];
            if(arr[i][j]) pot[i][j] = pot[i][j-1] + 1;
            //cout<<sum[i][j]<<" ";
        }
        //cout<<endl;
    }
}

lli checked(lli x,lli y,lli d){
    lli tot = 0;
    ok = 0;
    for(lli i=x-d;i<=x+d;i++){
        if(y+d<=maxY){
        tot = tot + sum[i][y+d] - sum[i][y-d-1];
        //cout<<tot<<endl;
        ok  = ok  + pot[i][y+d] - pot[i][y-d-1];
        }
        else{
            tot = tot + sum[i][maxY] - sum[i][y-d-1];
            //cout<<tot<<endl;
            ok  = ok  + pot[i][maxY] - pot[i][y-d-1];
        }
    }
    return tot;
}
lli maximum(lli d){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdin);

    lli ret,maxi = -1;
    for(lli i=minX;i<=maxX;i++){
        for(lli j=minY;j<=maxY;j++){
            ret = checked(i,j,d);
            //cout<<ret<<" ";
            if(maxi<ret){
                maxi = ret;
                ansX = i;
                ansY = j;
                ansC = ok;
            }
            else if(maxi == ret && ansC>ok){
                maxi = ret;
                ansX = i;
                ansY = j;
                ansC = ok;

            }
        }
       // cout<<endl;
    }
    return maxi;
}


void clr(){
     for(lli i=minX;i<=maxX;i++)
        for(lli j=minY;j<=maxY;j++){
                arr[i][j] = 0;
                sum[i][j] = 0;
                pot[i][j] = 0;
        }
}

void init(){
    maxX = -1;
    maxY = -1;
    minX = 100005;
    minY = 100005;
    ansC = 255*20000;
}

int main(){
    lli t;
    lli d;
    lli n;
    lli x,y,num,ans;
    cin>>t;
    while(t--){
        cin>>d>>n;
        init();
        for(lli i = 0; i < n; i++){
            cin>>x>>y>>num;
            arr[x][y] = num;
            if(x<minX) minX = x;
            if(y<minY) minY = y;
            if(x>maxX) maxX = x;
            if(y>maxY) maxY = y;
        }
        sumis();
        //cout<<minX<<minY<<maxX<<maxY<<endl;
        ans = maximum(d);
        cout<<ansX<<" "<<ansY<<" "<<ans<<endl;
        clr();
    }
}
