#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

pair<int,int> p;
vector< pair<int,int> >ans;
int flag[10];
int cnt;

int test(int col,int row){
    int dx,dy;
    for(int i=0;i<ans.size();i++){
           dx = abs(ans[i].first - col);
           dy = abs(ans[i].second - row);
           if(dx==dy) return -1;
    }
    return 1;
}


void  funct(int col,int row){


   // cout<<"ok 1"<<endl;
    p.first = col;
    p.second = row;
    ans.push_back(p);
    //cout<<" exact "<<col<<" "<<row<<endl;
    flag[row] = 1;
    //base case
    if(col==7){
        cnt++;
        cout<<cnt<<"     "<<endl;
        for(int i=0;i<ans.size();i++){
           int a = ans[i].second+1;
            cout<<a<<" ";
        }
        cout<<endl;
        return ;
    }
    //cout<<"ok 2"<<endl;
    // have to write
    for(int i=0;i<8;i++){
        if((i<row-1||i>row+1)&&flag[i]!=1&&test(col+1,i)==1){
            //cout<<i+1<<" "<<col+2<<endl;
            flag[i] = 1;
            funct(col+1,i);
            int l = ans.size();
            //cout<<" back "<<ans[l-1].second<<endl;
            flag[i] = 0;
            ans.pop_back();
        }
    }
    //cout<<"ok 3"<<endl;
    return;

}

int main(){
    //freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    cnt = 0;
   // p.first = n;
    //p.second = m;
    //ans.push_back(p);
    funct(n-1,m-1);

}
