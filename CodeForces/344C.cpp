#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

#define lli long long int

vector<int> arr;

bool cmp(int a,int b){
    return a>b;
}

int main(){
    int n,m,a,t,r;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(int i=0;i<m;i++){
        cin>>t>>r;
        if(t==1)
        sort(arr.begin(),arr.begin()+r);
        else
        sort(arr.begin(),arr.begin()+r,cmp);
    }
    int l = arr.size();
    cout<<arr[0];
    for(int i=1;i<l;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
