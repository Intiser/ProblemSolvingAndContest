#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

vector<pair<double,double> >points;

void print(){
    int len = points.size();
    for(int i=0;i<len;i++){
        cout<<points[i].first<<" "<<points[i].second<<endl;
    }
}

double EPS = 0.00000001;
int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //cout<<EPS<<endl;
    int n,l,w;
    double hg,ln;
    int p,r;
     pair<double,double> ne;
    while(cin>>n>>l>>w){
        hg = (w*1.0)/2;
       // cout<<hg<<endl;
       int m =0;
       points.clear();
       for(int i=0;i<n;i++){
            cin>>p>>r;
            ln = sqrt(  abs(r*r - hg*hg) );
            ne.first  = p - ln;
            ne.second = p + ln;
            //cout<<ne.first<<" "<<ne.second<<endl;
            if(r>=hg){
                points.push_back(ne);
                m++;
            }
       }
       sort(points.begin(),points.end());
       //print();
      int flag = 0;

      double X = 0,x,y,fl;
      double Y = 0;
      int cnt = -1;
      //cout<<m<<endl;
      for(int i=0;i<m;){
            double mx = 0;
            fl = 0;
            while(Y>=points[i].first&&i<m){
                double l = points[i].second;
                if(l>mx){
                    mx = l;

                    y = points[i].second;
                    x = points[i].first;
                    //cout<<x<<" "<<y<<endl;
                }
                fl = 1;
                i++;
            }
            if(fl == 1){
                if(cnt==-1) cnt  = 0;
                cnt++;
                X = x;
                Y = y;
            }
            else break;
            //cout<<X<<" "<<Y<<" "<<l<<endl;

            if(Y>=l) break;
            //cout<<x<<" "<<y<<endl;
      }
      if(cnt==0||Y<l) cnt = -1;

      cout<<cnt<<endl;


    }
}
