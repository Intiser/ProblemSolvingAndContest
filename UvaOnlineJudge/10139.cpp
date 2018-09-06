#include<iostream>
#include<stdio.h>
#include<map>
#include<vector>

using namespace std;

int flag[100000];
int prime[100000];
int in = 0;
vector<int> lists;

void seive(){
    flag[0] = 1;
    flag[1] = 1;

    for(int i=4;i<=100000;i+=2) flag[i]++;
     prime[0] = 2;
     in = 1;
     //cout<<prime[0]<<endl;
    for(int i=3;i<=100000;i+=2) {
        if(!flag[i]){
            prime[in] = i;
            //cout<<prime[in]<<endl;
            in++;
            for(int j=i+i;j<=100000;j+=i){
                flag[j]++;
            }
        }
    }
    prime[0] = 2;
    //cout<<in<<endl;
}

void primelistof(int n){
    if(n<2) return;
    lists.clear();
    int tmp = n;
    for(int i=0;i<in&&prime[i]*prime[i]<=tmp;i++){
        if(tmp%prime[i]==0){
            while(tmp%prime[i]==0){
                tmp = tmp / prime[i];
                lists.push_back(prime[i]);
            }
        }
    }
    if(tmp>1){
        lists.push_back(tmp);
    }

}

void check(){
    for(int i = 0;i<lists.size();i++){
        cout<<lists[i]<<" ";
    }
    cout<<endl;
}

void pcheck(){
    for(int i = 0;i<in;i++){
        cout<<prime[i]<<endl;
    }
    cout<<endl;
}

void vis(map<int,int>mp,map<int,int>vs,int x,int val){
    if(!vs[x]){
        vs[x] = 1;
        mp[x] = 1;
    }
    mp[x] = mp[x] + val;
}

bool answer(int n){

}

int main(){

    //freopen("out.txt","w",stdout);
    seive();
    //fclose(stdout);
    //freopen("int.txt","w",stdout);
   // pcheck();
    //fclose(stdout);
    int n,m;
    while(cin>>n>>m){
        primelistof(m);
        //check();
    }
}
