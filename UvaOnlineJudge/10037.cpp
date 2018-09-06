#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

priority_queue<int,vector<int>, greater<int> > pass;
priority_queue<int,vector<int>, greater<int> > will;
priority_queue<int,vector<int>, greater<int> > help;
vector<int>root[1000000];
int st;


void clr(){
    while(!pass.empty()) pass.pop();
    while(!will.empty()) will.pop();
    while(!help.empty()) help.pop();
    for(int i=0;i<st;i++) root[i].clear();
}

int greedy(){
    st = 0;
    if(will.size()==1){
        return will.top();
    }
    int tot = 0;
    int x = will.top();
    will.pop();
    int y = will.top();
    will.pop();
    tot =  y;
    root[st].push_back(x);
    root[st].push_back(y);
    st++;
    // try here
   // cout<<x<<" "<<y<<endl;
    if(will.empty()) return tot;
    tot = tot + x;
    //cout<<x<<endl;
    pass.push(y);
    root[st].push_back(x);
    st++;
    will.push(x);
    int z;
    int p;
    int tot1;
    int tot2;
    while(!will.empty()){
        p = pass.top();
        x = will.top(); will.pop();
        y = will.top(); will.pop();
        if(!will.empty()){
            z = will.top();
            tot1 = x+y+z; tot2 = z+p+p;
            if(tot1>tot2){
                //cout<<y<<" "<<z<<endl;
                root[st].push_back(y);
                root[st].push_back(z);
                st++;
                root[st].push_back(p);
                st++;
                pass.push(y);
                pass.push(z);
                will.pop();
                will.push(x);
                // next
                //cout<<p<<endl;
                pass.pop();
                will.push(p);
                tot = tot + z + p;
            }
            else{
                root[st].push_back(x);
                root[st].push_back(y);
                st++;
                root[st].push_back(x);
                st++;
                //cout<<x<<" "<<y<<endl;
                pass.push(y);
                //next
                //cout<<x<<endl;
                will.push(x);
                tot = tot + y + x;
            }
        }
        else{
            //cout<<x<<" "<<y<<endl;
            root[st].push_back(x);
            root[st].push_back(y);
            st++;
            tot = tot + y;
        }
    }
    return tot;
}

void print(){
    for(int i=0;i<st;i++){
        cout<<root[i][0];
        for(int j=1;j<root[i].size();j++) cout<<" "<<root[i][j];
        cout<<endl;

    }
}




int main(){
    int t;
    int n;
    int x;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            will.push(x);
        }
        cout<<greedy()<<endl;
        print();
        clr();
    }
}
