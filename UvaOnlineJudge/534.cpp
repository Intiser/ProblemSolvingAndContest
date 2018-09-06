#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int flag[250];

struct point{
        double x;
        double y;

        point(double X,double Y){
            x = X;
            y = Y;
        }
};

vector<point>points;

struct line{
    double x1;
    double y1;
    int p1;
    double x2;
    double y2;
    int p2;
    double ln;
    line(double X1,double X2,double Y1,double Y2,int P1,int P2){
        x1 = X1;
        y1 = Y1;
        x2 = X2;
        y2 = Y2;
        p1 = P1;
        p2 = P2;
        ln = sqrt((X2-X1)*(X2-X1) + (Y2-Y1)*(Y2-Y1) );
    }
    bool operator < (line l) const{
        return l.ln > ln;
    }
};

vector<line>lines;
int p[250];

void init(){
    lines.clear();
    int siz = points.size();
    for(int i=0;i<siz;i++){
        for(int j=i+1;j<siz;j++){
            if(i!=j){
                line l = line(points[i].x,points[j].x,points[i].y,points[j].y,i,j);
                lines.push_back(l);
            }
        }
    }

    for(int i=0;i<=siz;i++){
        p[i] = i;
        flag[i] = 0;
    }
}

int findP(int u){
    if(u==p[u]) return u;
    p[u] = findP(p[u]);
    return p[u];
}

void Union(int u,int v){
    p[findP(v)] = findP(u);
}

bool check(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(pu==pv) return false;
    return true;
}

void print(){
    for(int i=0;i<lines.size();i++){
        cout<<lines[i].ln<<" "<<lines[i].p1<<" "<<lines[i].p2<<endl;
    }
}

bool chk(){
    int pu = findP(0);
    int pv = findP(1);
    if(pu==pv) return true;
    return false;
}

double mst(){
    init();
    double tot = 0;
    double mx  = 0;
    int sz = lines.size();
    sort(lines.begin(),lines.end());
    print();
    for(int i=0;i<sz;i++){
        if(check(lines[i].p1,lines[i].p2)==true){
                Union(lines[i].p1,lines[i].p2);
                //tot = tot + lines[i].ln;
                cout<<" ### "<<lines[i].x1<<" "<<lines[i].y1<<" "<<lines[i].x2<<" "<<lines[i].y2<<" "<<lines[i].ln<<endl;
                if(mx<lines[i].ln) mx = lines[i].ln;
        }
        //if(chk()) break;

    }
    return mx;
}


int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    int sc = 1;
    double x,y;
    while(cin>>n){
        if(n==0) break;
        points.clear();
        for(int i=0;i<n;i++){
            cin>>x>>y;
            point pn = point(x,y);
            points.push_back(pn);
        }
        double tot = mst();
        cout<<"Scenario #"<<sc<<endl;
        sc++;
        printf("Frog Distance = %.3lf\n\n",tot);
        //cout<<tot<<endl;
    }
}
