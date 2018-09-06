#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>
#include<map>

using namespace std;

#define sc(x) scanf("%d",&x);

struct comp{
    bool operator()(const pair<int,int>& lhs,const pair<int,int>& rhs){
        return lhs.first > rhs.first;
    }
};

priority_queue<int, vector< pair<int,int> >, comp > pq;
pair<int,int> a;
vector<int> team[1050];

int srl;
int tsrl;
int serial[1050];
int number[1050];

int main(){
    int n,t,m,tm;
    string s;
    while(cin>>n){
        if(n==0) break;
        map<int,int> mp;
        tsrl = 1;
        for(int i = 0; i<n ; i++){
            //cin>>m;
            sc(m);
            for(int j = 0; j<m ; j++){
                //cin>>tm;
                sc(tm);
                mp[tm] = tsrl;
                team[tsrl].push_back(tm);
            }
            tsrl++;
        }
        srl = 1;
        while(cin>>s){
            if(s=="STOP") break;
            if(s== "ENQUEUE"){
                //cin>>tm;
                sc(tm);
                if(serial[mp[tm]]==0){
                    serial[mp[tm]] = srl;
                    srl++;
                }
                a.first = serial[mp[tm]];
                a.second = tm;
                number[serial[mp[tm]]]++;
                pq.push(a);
            }
            else if(s == "DEQUEUE"){
                cout<<pq.top().first<<" "<<pq.top().second<<endl;
                a = pq.top();
                number[serial[mp[a.first]]]--;
                serial[mp[a.second]] = 0;
                pq.pop();

            }
        }
    }
}

