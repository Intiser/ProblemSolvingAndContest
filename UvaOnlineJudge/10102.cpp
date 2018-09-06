#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<vector>

using namespace std;

vector<int> ones;
vector<int> threes;

string s[110];

void check(int n){
    int len;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='1') ones.push_back((i+1)*n+j);
            else if(s[i][j]=='3') threes.push_back((i+1)*n+j);
        }
    }
}

int funct(int l){
    int n = ones.size();
    int m = threes.size();
    int maxm = -1;
    int minm = l*l+1;
    int x,y,X,Y,ret;
    for(int i=0;i<n;i++){
        x = ones[i] / l;
        y = ones[i] % l;
        minm = l*l + 1;
        //cout<<" >> "<<ones[i]<<endl;
        for(int j=0;j<m;j++){
            X = threes[j] / l;
            Y = threes[j] % l;
            ret = abs(X-x) + abs(Y-y) ;
            if(ret<minm) minm = ret;
        }
        if(minm>maxm) maxm = minm;
    }
    return maxm;
}


int main(){
    int n,ans;
    while(cin>>n){
        for(int i=0;i<n;i++) cin>>s[i];
        check(n);
        ans = funct(n);
        cout<<ans<<endl;
        ones.clear();
        threes.clear();
    }
}
