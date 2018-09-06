#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

double EPS = 0.000000001;

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
    double p1;
    double x2;
    double y2;
    double p2;
    double ln;
    line(double X1,double X2,double Y1,double Y2,double P1,double P2){
        x1 = X1;
        y1 = Y1;
        x2 = X2;
        y2 = Y1;
        p1 = P1;
        p2 = P2;
        ln = sqrt((X2-X1)*(X2-X1) + (Y2-Y1)*(Y2-Y1) );
    }
    bool operator < (line l) const{
        return l.ln > ln;
    }
};

vector<line>lines;
int p[105];

void init(){
    lines.clear();
    int siz = points.size();
    for(int i=0;i<siz;i++){
        for(int j=0;j<siz;j++){
            if(i!=j){
                line l = line(points[i].x,points[j].x,points[i].y,points[j].y,i,j);
                lines.push_back(l);
            }
        }
    }
    for(int i=0;i<siz;i++){
        p[i] = i;
    }
}

int findP(int u){
    if(u==p[u]) return u;
    p[u] = findP(p[u]);
    return p[u];
}

void Union(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    p[pu] = pv;
}

bool check(int u,int v){
    int pu = findP(u);
    int pv = findP(v);
    if(pu==pv) return false;
    return true;
}

void print(){
    for(int i=0;i<lines.size();i++){
        cout<<lines[i].ln<<endl;
    }
}

double mst(){
    init();
    double tot = 0;
    int sz = lines.size();
    sort(lines.begin(),lines.end());
    //print();
    for(int i=0;i<sz;i++){
        if(check(lines[i].p1,lines[i].p2)==true){
                Union(lines[i].p1,lines[i].p2);
                tot = tot + lines[i].ln;
        }
    }
    return tot;
}



int main(){
    int t;
    int n;
    double x,y;
    cin>>t;
    while(t--){
        cin>>n;
        points.clear();
        for(int i=0;i<n;i++){
            cin>>x>>y;
            point p = point(x,y);
            points.push_back(p);
        }
        double tot = mst();
        //cout<<tot<<endl;
        printf("%.2lf\n",tot);
        if(t) cout<<endl;
    }

}
