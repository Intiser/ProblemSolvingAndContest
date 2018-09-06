#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

#define lli long long int

pair<int,int> sol[1005];

bool comp(const  pair<int,int> &lhs,const  pair<int,int> &rhs){
   /* if((lhs.second-lhs.first)==(rhs.second-rhs.first)){
        return lhs.first > rhs.second;
    }
    return (lhs.second-lhs.first)>(rhs.second-rhs.first);*/
    return lhs.second > rhs.second;
}

void sorting(int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((sol[i].second-sol[i].first)==(sol[j].second-sol[j].first)){
                if(sol[i].first<sol[j].second) swap(sol[i],sol[j]);
            }
            else if((sol[i].second-sol[i].first)<(sol[j].second-sol[j].first)){
                swap(sol[i],sol[j]);
            }
        }
    }
}


int main(){
    int n,cas =1;
    lli tot;
    lli wrkmx,brfmx,maxi;
    while(cin>>n){
        if(n==0) break;
        for(int i=0;i<n;i++){
            scanf("%d%d",&sol[i].first,&sol[i].second);
        }
        sort(sol,sol+n,comp);
       // sorting(n);
       brfmx = 0;
       wrkmx = 0;
       maxi = 0;
       tot = 0;
        for(int i=0;i<n;i++){
            //cout<<sol[i].first<<" "<<sol[i].second<<endl;
            tot = tot + sol[i].first;
            //cout<<tot<<endl;
            if(brfmx<(tot+sol[i].second)){
                brfmx=tot+sol[i].second;
            }
            if(wrkmx<brfmx){
                wrkmx=brfmx;
            }
        }
        maxi = wrkmx;
        cout<<"Case "<<cas<<": ";
        cout<<maxi<<endl;
        cas++;
    }
}
