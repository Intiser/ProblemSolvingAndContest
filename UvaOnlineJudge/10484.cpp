#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

#define lli long long int

lli prime[100005];
lli flag[100005];
lli in;
vector<lli> lists[105];
vector<lli> newl;
lli power[105][105];
lli mxprm[105];
lli arr[105];

void sieve(){
    in=1;
    flag[0]=1; flag[1]=1; prime[0]=2;
    for(int i=4;i<=100000;i+=2) flag[i]++;
    for(int i=3;i<=100000;i+=2){
        if(!flag[i]){
        prime[in]=i; in++;
        for(int j=i+i;j<=100000;j+=i)
        flag[j]++;
        }
    }
    //cout<<in<<endl;
}

void prmfact(lli tmp){
    lli n = tmp;
    lists[n] = lists[n-1];
    for(int i=0;prime[i]*prime[i]<=tmp&&i<in;i++){
        if(tmp%prime[i]==0){
            while(tmp%prime[i]==0){
                tmp = tmp / prime[i];
                lists[n].push_back(prime[i]);
            }
        }
    }
    if(tmp>1)  lists[n].push_back(tmp);
    sort(lists[n].begin(),lists[n].end());
}

bool isPrime(lli tmp){
    if(tmp<=100000&&!flag[tmp]){
         return true;
    }
    for(int i=0;prime[i]*prime[i]<=tmp&&i<in;i++){
        if(tmp%prime[i]==0) return false;
    }
    return true;
}

void prmfactN(lli tmp){
    newl.clear();
    for(int i=0;prime[i]*prime[i]<=tmp&&i<in;i++){
        if(tmp%prime[i]==0){
            while(tmp%prime[i]==0){
                tmp = tmp / prime[i];
                newl.push_back(prime[i]);
            }
        }
    }
    if(tmp>1)  newl.push_back(tmp);
}

void doall(){

    lists[2].push_back(2);
    for(lli i=3;i<=100;i++){
        prmfact(i);
    }
}

void compute(){
    for(int i=2;i<=100;i++){
        for(int j=0;j<lists[i].size();j++){
            power[i][lists[i][j]]++;
            mxprm[i] = lists[i][j];
        }
        for(int j=0;j<105;j++){
            if(power[i][j]) power[i][j]++;
        }
    }
}

void print(){
    /*for(int i=0;i<newl.size();i++) cout<<newl[i]<<" ";
    cout<<endl;*/
   /* for(int i=2;i<=5;i++){
        for(int j=0;j<lists[i].size();j++) cout<<lists[i][j]<<" ";
        cout<<endl;
    }
    for(int i=2;i<6;i++){
        for(int j=0;j<=100;j++){
            if(power[i][j]) cout<<power[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //for(int i=2;i<=5;i++) cout<<mxprm[i]<<endl;
}

lli result(lli n){
    for(int i=0;i<=100;i++) arr[i] = power[n][i];
    for(int i=0;i<newl.size();i++){
        if(newl[i]>100) return 0;
        arr[newl[i]]--;
        if(arr[newl[i]]==0||arr[newl[i]]<0) return 0;
    }
    lli res = 1;
    for(int i=0;i<=mxprm[n];i++){
        if(arr[i])
        res = res * arr[i];
    }
    return res;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sieve();
    doall();
    compute();
    print();

    lli n,m;
    bool ans;
    lli res;
    while(cin>>n>>m){
        if(n==0&&m==0) break;
        if(m<0) res = 0;
        if(m>0){
        prmfactN(m);
        res = result(n);
        }
        cout<<res<<endl;
    }
}
