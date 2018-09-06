#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>lists;
vector<int>ans;
vector<int>all[10000];
int n,m;
int tgt;
int flag;
int in;

void print(){
    cout<<ans[0];
    for(int i=1;i<ans.size();i++) cout<<"+"<<ans[i];
    cout<<endl;
}

int check(){
    for(int i=0;i<in;i++){
        if(ans==all[i]) return 0;
    }
    all[in] = ans;
    in++;
    return 1;
}

void rec(int u,int sum){
    if(sum>tgt) return;
    if(sum==tgt){
        flag = 1;
        if(check())
         print();
        return;
    }

    for(int i=u+1;i<n;i++){
        ans.push_back(lists[i]);
        rec(i,sum+lists[i]);
        ans.pop_back();
    }
}

void start(){
    flag = 0;
    in   = 0;
    for(int i=0;i<n;i++){
        ans.push_back(lists[i]);
        rec(i,lists[i]);
        ans.pop_back();
    }
}

void clr(){
    ans.clear();
    lists.clear();
    for(int i=0;i<in;i++) all[i].clear();
}

int main(){
    int x;
    while(cin>>tgt>>n){
        if(tgt==0&&n==0) break;
        for(int i=0;i<n;i++){
            cin>>x;
            lists.push_back(x);
        }
        printf("Sums of %d:\n",tgt);
        start();
        if(flag==0)
            printf("NONE\n");
        clr();
    }
}
