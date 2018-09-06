#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

struct node{
    string s;
    int tot;
    node(){
    }
    bool operator < (node n) const {
        if(n.tot == tot) return n.s > s;
        return n.tot > tot;
    }
};

vector<node>lists;

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n;
    string s;
    int mnt;
    int sec;
    int msc;
    int tot;
    string tmp;
    node no;
    while(cin>>n){
        lists.clear();
        for(int i=0;i<n;i++){
            cin>>s;
            cin>>tmp;
            cin>>mnt;
            cin>>tmp;
            cin>>sec;
            cin>>tmp;
            cin>>msc;
            cin>>tmp;
            no.s = s;
            no.tot = mnt*60*1000 + sec*1000 + msc;
            lists.push_back(no);
        }
        sort(lists.begin(),lists.end());
        for(int i=0;i<n;i++){
            if(i%2==0) cout<<"Row "<<i/2+1<<endl;
            cout<<lists[i].s<<endl;
        }
        cout<<endl;
    }
}
