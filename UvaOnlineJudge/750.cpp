#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

pair<int,int> p;
vector< pair<int,int> >ans;
vector< pair<int,int> > tmp;
vector< pair<int,int> >arr[100];
int flag[100];
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

        //cout<<cnt<<"     ";
        arr[cnt] = ans;
        cnt++;
        sort(arr[cnt-1].begin(),arr[cnt-1].end());
        /*int a = arr[0].first+1;
        cout<<a;
        for(int i=1;i<arr.size();i++){
            a = arr[i].first+1;
            cout<<" "<<a;
        }
        cout<<endl;*/
     /*    int a = arr[0].second+1;
        cout<<a;
        for(int i=1;i<arr.size();i++){
            a = arr[i].second+1;
            cout<<" "<<a;
        }
        cout<<endl;*/
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
        funct(m-1,n-1);
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
int logic(int x,int y,int z){
    if(x==7&&arr[x][z].second==arr[y][z].second) return -1;
    else if(arr[x][z].second==arr[y][z].second) return logic(x,y,z+1);
    if(arr[x][z].second<arr[y][z].second) return -1;
    if(arr[x][z].second>arr[y][z].second) return 1;
}


void srt(){
        sort(arr,arr+cnt);
       /* for(int j=0;j<cnt;j++){
            for(int k=j+1;k<cnt;k++){
                int l = logic(j,k,0);
                if(l==1){
                    tmp = arr[j];
                    arr[j] =arr[k];
                    arr[k] =tmp;
                }
            }
        }*/

}

int main(){
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int t;
    cin>>t;

   for(int cas = 1;cas<=t;cas++){
        cin>>n>>m;
        cnt = 0;
        funct1(m-1,n-1);
        srt();
        printf("SOLN       COLUMN\n");
        printf(" #      1 2 3 4 5 6 7 8\n\n");
        for(int i=0;i<cnt;i++){
            printf("%2d",i+1);
            cout<<"      "<<arr[i][0].second+1;
            for(int j=1;j<8;j++)
                cout<<" "<<arr[i][j].second+1;
            cout<<endl;
            arr[i].clear();
        }
        if(t!=cas) printf("\n");
        for(int i=0;i<8;i++) flag[i] = 0;
        ans.clear();
    }

}


