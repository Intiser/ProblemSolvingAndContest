#include<iostream>
#include<stdio.h>
#include<cmath>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

#define lli unsigned long long int

map<lli,lli> val;
map<lli,lli> used;
vector<lli>lists;

lli mx = 1;
lli dx;

void go(){
    for(lli i=2;i<=mx;i++){
        lli p = i;
        lli ok = (dx-i)/i;
        for(lli j=i*i;ok>0;){
            p = j;
            val[j]++;
            if(val[j]>1&&!used[j]){
                lists.push_back(j);
                used[j] = 1;
            }
            ok = (dx/j)/i;
            if(ok!=0)
            j = j*i;
            //if(ok!=0)
            //cout<<ok<<endl;
        }
    }
}

int main(){
    freopen("out.txt","w",stdout);
    mx = 2642245;
    dx = 18446744073709551615;
    go();
    lists.push_back(1);
    sort(lists.begin(),lists.end());
    lli siz = lists.size();
    //cout<<siz<<endl;
    for(lli i=0;i<siz;i++){
        cout<<lists[i]<<endl;
    }
}
