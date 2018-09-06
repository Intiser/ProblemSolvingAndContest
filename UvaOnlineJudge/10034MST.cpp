#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
#include<cmath>

using namespace std;

int t,n;
pair<double,double> points[105];
int flag[105];
int used[105];

class compare{
    public:
    bool operator()(pair<int,double> n1,pair<int,double> n2) {
        return n1.second>n2.second;
    }
};

priority_queue< pair<int,double> ,vector<pair<int,double> >,compare > pq;
vector<pair<int,double> >newl;
pair<int,double> p;
pair<int,double> q;

int check(){
    /*for(int i=0;i<n;i++) flag[i] = 0;
    for(int i=0;i<newl.size();i++){
        flag[newl[i].first]++;
    }
    for(int i=0;i<n;i++) if(flag[i]==0) return 0;
    return 1;*/
    for(int i=0;i<n;i++) if(used[i]==0) return 0;
    return 1;
}
double dis(int i,int j){
    double x1 = points[i].first;
    double y1 = points[i].second;
    double x2 = points[j].first;
    double y2 = points[j].second;
    double ans = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return ans;
}

void tring(){
    for(int i=0;i<n;i++) cout<<used[i]<<" ";
    cout<<endl;
}


void mst(){
    newl.clear();
    p.first = 0;
    p.second = 0;
    pq.push(p);
    //cout<<" 1 "<<endl;
    while(check()==0&&!pq.empty()){
        p = pq.top();
        while(used[p.first]&&!pq.empty()){
            pq.pop();
            p = pq.top();
        }
        if(pq.empty()) return;
        //cout<<" 2 "<<endl;
        pq.pop();


        newl.push_back(p);
        used[p.first]++;
        tring();
        for(int i=0;i<n;i++){
            if(used[i]==0){
                q.second =dis(p.first,i);
                q.first = i;
                pq.push(q);
                //cout<<i<<endl;
            }
        }
       // cout<<" 3 "<<endl;
    }
}

void print(){
    for(int i=0;i<newl.size();i++) cout<<newl[i].first<<endl;
}

double compute(){
    double tot = 0;
    double d1,d2;
    for(int i=1;i<newl.size();i++){
        d1 = dis(newl[i].first,newl[i-1].first);
        tot = tot + d1;
    }
    return tot;
}

void clr(){
    for(int i=0;i<=100;i++){
        flag[i] = 0;
        used[i] = 0;

    }
    newl.clear();
    while(!pq.empty()) pq.pop();
}

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>points[i].first>>points[i].second;
        }
        mst();
        //print();
        //cout<<compute()<<endl;
        printf("%.2lf\n",compute());
        if(t) printf("\n");
        clr();
    }

}
