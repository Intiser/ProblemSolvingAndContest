#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

vector<int>ele;

int main(){
    int n,w,a;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>w;
        for(int i=0;i<n;i++){
            cin>>a;
            ele.push_back(a);
        }
        sort(ele.begin(),ele.end());
        int cnt = 0;
        for(int i=0;i<ele.size();i++){
            if(w-ele[i]>=0){
                w = w - ele[i];
                cnt++;
            }
        }
        cout<<cnt<<endl;
        ele.clear();
    }
}
