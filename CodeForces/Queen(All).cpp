#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

pair<int,int> p;
vector< pair<int,int> >ans;
vector< pair<int,int> >tmp;
vector< pair<int,int> >arr[100000];
int flag[1000];
int mod,md = 8;
int cnt = 0;
int n,m;
int time;

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
    if(col==(time-1)){

        tmp = ans;
        sort(tmp.begin(),tmp.end());
        int fl = 0;
        for(int k=0;k<cnt;k++)
            if(arr[k]==tmp){
            fl = 1;
            break;
            }
        if(fl==0){
            arr[cnt] = ans;
            cnt++;
            sort(arr[cnt-1].begin(),arr[cnt-1].end());
        }
        return ;
    }
    //cout<<"ok 2"<<endl;
    // have to write
    for(int i=0;i<time;i++){
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
    for(int i=0;i<time;i++){
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


       cin>>time;
        cnt = 0;
        md = time;
        for(n=1;n<=time;n++){
            for( m=1;m<=time;m++){
                funct1(n-1,m-1);
                for(int i=0;i<time;i++) flag[i] = 0;
                ans.clear();
            }
        }
        for(int i=0;i<cnt;i++){
            int a = arr[i][0].second+1;
            cout<<a;
            for(int j=1;j<arr[i].size();j++){
                a = arr[i][j].second+1;
                cout<<" "<<a;
            }
            cout<<endl;
        }


}



