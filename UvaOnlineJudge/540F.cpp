#include<iostream>
#include<stdio.h>
#include<queue>
#include<map>

using namespace std;

map<int,int> teamIndex;
queue<int>q[1050];
queue<int>tq;
int flag[1050];

void enqu(int val){
    int ind = teamIndex[val];
    //cout<<"enqu "<<val<<endl;
    if(flag[ind]==0){
        flag[ind] = 1;
        tq.push(ind);
        //cout<<ind<<" "<<tq.size()<<endl;
    }
    q[ind].push(val);
    //cout<<q[ind].size()<<endl;
}

int dequ(){
    int in = tq.front();
    int val = q[in].front();
    q[in].pop();
   // cout<<" dequ "<<in<<" "<<q[in].size()<<endl;
    if(q[in].empty()){
        flag[in] = 0;
        tq.pop();
    }
    //cout<<tq.size()<<endl;
    return val;
}

void clr(int n){
    teamIndex.clear();
    while(!tq.empty()) tq.pop();

    for(int i=0;i<=n;i++){
        while(!q[i].empty())
            q[i].pop();
        //cout<<q[i].size()<<endl;
        flag[i] = 0;
    }
}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    int n,a,tmp;
    int scn = 1;
    int ans;
    string s;
    while(cin>>t){
        if(t==0) break;
        for(int i=1;i<=t;i++){
            cin>>n;
            for(int j=0;j<n;j++){
                cin>>a;
                teamIndex[a] = i;
                //cout<<a<<" "<<teamIndex[a]<<endl;
            }
        }
        cout<<"Scenario #"<<scn<<endl;
        scn++;
        while(cin>>s){
            if(s=="STOP") break;
            if(s=="ENQUEUE"){
                cin>>tmp;
                enqu(tmp);
            }
            else if(s=="DEQUEUE"){
                ans = dequ();
                cout<<ans<<endl;
            }
        }
        cout<<endl;
        clr(t);
    }
}
