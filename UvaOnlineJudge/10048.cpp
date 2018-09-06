#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

struct node{
    int x;
    int y;
    int dis;
    bool operator < (node n) const {
        return n.dis > dis;
    }
    node(int X,int Y,int D){
        x = X;
        y = Y;
        dis = D;
    }
};

vector<node> lists;
int p[100100];
int fr[100100];

int djkastra(int u,int v){
    priority_queue< node,vector<node> > pq;
}




int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int n,s,q;
    int x,y,d;


}

