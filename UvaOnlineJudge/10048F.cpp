#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>

using namespace std;

#define lli long long int

vector<pair<int,int> >g[105];
pair<int,int>pc;
int used[105];

struct node{
    int u;
    int v;
    int dis;
};

class compare{
    public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second>n2.second;
    }
};

priority_queue< pair<int,int> , vector<pair<int,int> >, compare > pq;

lli mst(int src,int tgt){
    lli tot = 0;
    pc.first = src;
    pc.second = 0;
    pq.push(pc);
    while(used[tgt]==0){
        pc = pq.top();
        while(used[pc.first]==1){
            pq.pop();
            pc = pq.top();
        }
        pq.pop();

    }
}

int main(){


}

