#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

vector<int>g[1005000];
vector<int>nums;

void isit(int val){
    if(g[val].size()>0) return ;
    nums.push_back(val);
}

void clr(){
    int siz = nums.size();
    for(int i=0;i<siz;i++){
        g[nums[i]].clear();
    }
    nums.clear();
}

int check(int x,int y){
    if(x>g[y].size()) return 0;
    return g[y][x-1];
}

int main(){
    int n,m;
    int a;
    int x,y;
    while(cin>>n>>m){
        for(int i=1;i<=n;i++){
            cin>>a;
            isit(a);
            g[a].push_back(i);
        }
        for(int i=0;i<m;i++){
            cin>>x>>y;
            cout<<check(x,y)<<endl;
        }
        clr();
    }
}
