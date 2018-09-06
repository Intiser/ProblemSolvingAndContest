#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

pair<int,int> p;
vector< pair<int,int> >ans;
vector< pair<int,int> >arr;
int flag[10];
int mod,md = 8;
int cnt = 0;
int n,m;

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
   if( flag[row] !=1){
    p.first = col;
    p.second = row;
    ans.push_back(p);
   }
    //cout<<" exact "<<col+1<<" "<<row+1<<endl;
    flag[row] = 1;
    //base case
    if(col==7){
        cnt++;
        //cout<<cnt<<"     ";
        arr = ans;
        sort(arr.begin(),arr.end());
        /*int a = arr[0].first+1;
        cout<<a;
        for(int i=1;i<arr.size();i++){
            a = arr[i].first+1;
            cout<<" "<<a;
        }
        cout<<endl;*/
         int a = arr[0].second+1;
        cout<<a;
        for(int i=1;i<arr.size();i++){
            a = arr[i].second+1;
            cout<<" "<<a;
        }
        cout<<endl;
        return ;
    }
    //cout<<"ok 2"<<endl;
    // have to write
    for(int i=0;i<8;i++){
        if((i<row-1||i>row+1)&&flag[i]!=1&&test((col+1)%md,i)==1){
            //cout<<i+1<<" "<<col+2<<endl;

            funct((col+1)%md,i);
            int l = ans.size();
            //cout<<" back "<<ans[l-1].second+1<<endl;
            flag[i] = 0;
            ans.pop_back();
        }
    }
    //cout<<"ok 3"<<endl;
    return;

}


void  funct1(int col,int row){


   // cout<<"ok 1"<<endl;
    p.first = col;
    p.second = row;
    ans.push_back(p);
    //cout<<" exact "<<col+1<<" "<<row+1<<endl;
    flag[row] = 1;
    //base case
    if(col==0){
        funct(n-1,m-1);
        return;
    }
    //cout<<"ok 2"<<endl;
    // have to write
    for(int i=0;i<8;i++){
        if((i<row-1||i>row+1)&&flag[i]!=1&&test((col-1)%md,i)==1){
            //cout<<i+1<<" "<<col+2<<endl;

            funct1((col-1)%md,i);
            int l = ans.size();
            //cout<<" back "<<ans[l-1].second+1<<endl;
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

    cin>>n>>m;

        cnt = 0;
        funct1(n-1,m-1);
        //for(int i=0;i<8;i++) flag[i] = 0;
        //ans.clear();


}

