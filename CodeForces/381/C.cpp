#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

struct node{
    int x;
    int y;
    bool operator < (node n) const {
        return x > n.x;
    }
}points[100100];

int st[100100];
int en[100100];
int arr[100100];

int main(){
    int n;
    int m;
    int x,y;
    int mn = 100010;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>x>>y;
        st[x]++;
        en[y]--;
        mn = min(mn,y-x+1);
    }
    //for(int i=1;i<=n;i++) cout<<var[i]<<endl;

    int f = 0;
    int pf = 0;
    int rn = 0;
    int mx = 0;
    //cout<<mn<<endl;
    for(int i=1;i<=n;i++){
        f += st[i];
        f += en[i];
       //cout<<f<<" "<<pf<<endl;
       if(f||pf|| (en[i]<0&&st[i]>0)){

            arr[i] = rn;
            rn++;
            //mx = max(mx,rn);
            if(mn==rn) rn = 0;
       }
       pf = f;
    }
    cout<<mn<<endl;
    cout<<arr[1];
    for(int i=2;i<=n;i++) cout<<" "<<arr[i];
    cout<<endl;
}
