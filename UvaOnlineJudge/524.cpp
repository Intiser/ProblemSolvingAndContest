#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int n;
int flag[105];
int used[105];
int cnt;
//vector<int>ans[10000];
vector<int>tmp;

void prm(){
    for(int i=4;i<=100;i+=2){
        flag[i]++;
    }
    flag[0] = 1;
    flag[1] = 1;
    for(int i=3;i<100;i+=2){
        for(int j=i+i;j<100;j=j+i) flag[j]++;
    }
}

void point(int n){
    used[n] = 1;
    tmp.push_back(n);
}

void eras(int n){
    used[n] = 0;
    tmp.pop_back();
}

int cor(int lst,int st){
    int l = tmp.size();
    int m;
    //cout<<"1"<<endl;
    if(st==n){
        m = lst + tmp[0];
    //cout<<m<<" "<<flag[m]<<endl;
        if(flag[m]) return 0;
    }
    //cout<<"1"<<endl;
    for(int i=1;i<l;i++){
        m = tmp[i] + tmp[i-1];
        if(flag[m]) return 0;
    }
    //cout<<"1"<<endl;
    m = tmp[l-1] + lst;
    if(flag[m]) return 0;
    //cout<<"1"<<endl;
    return 1;
}

void prnt(){
    for(int i=0;i<tmp.size()-1;i++){
        cout<<tmp[i]<<" ";
    }
    cout<<tmp[n-1]<<endl;
    //cout<<endl;
}

void check(int st){
    if(st==n) {
        cnt++;
        prnt();
        return;
    }
    //cout<<" chol tese "<<st<<endl;
    for(int i=1;i<=n;i++){
        //cout<<" ok "<<st<<endl;
       // cout<<cor(i)<<" # "<<i<<endl;
        //prnt();
        if(!used[i]&&cor(i,st+1)){
            point(i);
            //cout<<" thk ase "<<endl;
            //prnt();
            check(st+1);
            eras(i);
         }
    }
}

void result(){
    point(1);
    cnt = 0;
    check(1);
    eras(1);
    //cout<<cnt<<endl;
}

int main(){
    prm();
    int cas = 1;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    while(cin>>n){
        if(cas>1) cout<<endl;
        cout<<"Case "<<cas<<":"<<endl;
        result();
        cas++;

    }
}
