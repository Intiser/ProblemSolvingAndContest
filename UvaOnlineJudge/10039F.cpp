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
vector<lli>lists;
vector<lli>prms;
vector<lli>divs;
map<lli,lli> times;

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
    lists.clear();
    prms.clear();
    lli t;
    for(int i=0;prime[i]*prime[i]<=tmp;i++){
        if(tmp%prime[i]==0){
            //t = 1;
            prms.push_back(prime[i]);
            while(tmp%prime[i]==0){
                tmp = tmp/prime[i];
                //t = t * prime[i];
                lists.push_back(prime[i]);
            }
        }
    }
    if(tmp>1) lists.push_back(tmp);
}


void print(){
    //sort(divs.begin(),divs.end());
    for(int i=0;i<lists.size();i++) cout<<lists[i]<<" ";
    cout<<endl;
}

bool isPrime(lli tmp){
    if(tmp<100000){
        if(!flag[tmp]) return true;
        return false;
    }
    for(int i=0;prime[i]*prime[i]<=tmp;i++){
        if(tmp%prime[i]==0) return false;
    }
    return true;
}

bool action(lli n,lli lim){
    lli t = 2,p = n;
    if(times[n]<=0&&n<=lim){
        times[n]++;
        return true;
    }
    while(times[p]>0&&p<=lim){
        p = n*t;
        if(p<=lim&&times[p]<=0){
            times[p]++;
            times[t]--;
            return true;
        }
        t++;
    }
    return false;
}

bool check(lli n,lli m){
    if(isPrime(m)&&m>n) return false;
    prmfact(m);
    times.clear();
    bool status;
    for(int i=0;i<lists.size();i++){
        status = action(lists[i],n);
        //cout<<lists[i]<<" "<<status<<endl;
        if(status==false) return false;
    }
    return true;
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    sieve();
    lli n,m;
    bool ans;
    while(cin>>n>>m){
        //cout<<check(n,m)<<endl;
        //prmfact(m);
        //print();
        ans = check(n,m);
        if(ans==true){
            cout<<m<<" divides "<<n<<"!"<<endl;
        }
        else{
            cout<<m<<" does not divide "<<n<<"!"<<endl;
        }
    }
}
