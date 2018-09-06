#include<iostream>
#include<stdio.h>
#include<map>

using namespace std;

#define lli long long int
lli n;
map<lli,lli> mp;
lli ind;
lli val[100000];

bool check(lli n){
    if(n<0) return false;
    if(n>4294967295) return false;
    return true;
}

lli funct(lli n){
        lli tot = 0;
        for(int i=0,j=n-1;i<=j;i++,j--){
            tot = tot + (val[i]*val[j]);
            if(i!=j) tot = tot + (val[i]*val[j]);
        }
        return tot;
}

void all(){
    val[0] = 1;
    val[1] = 1;
    val[2] = 2;
    val[3] = 5;
    for(int i=4;i<=21;i++){
        ind = i;
        val[i] = funct(i);
        //cout<<i<<" "<<val[i]<<endl;
        //if(check(val[i])==false) break;

    }
    ind++;
}

void print(){
    for(int i=1;i<ind;i++){
        //cout<<val[i]<<endl;
        mp[val[i]] = i;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    all();
    print();
    while(cin>>n){
        if(mp[n])
        cout<<mp[n]<<endl;
    }
}
