#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

vector<int>nums;

int answer(int tmp){
    if(tmp==1){
        nums.push_back(1);
        return 1;
    }
    nums.clear();
    for(int i=9;i>1;i--){
        while(tmp%i==0){
            nums.push_back(i);
            tmp = tmp/i;
        }
    }
    if(tmp>1) return -1;
    return 1;
}

void print(){
    reverse(nums.begin(),nums.end());
    int siz = nums.size();
    for(int i=0;i<siz;i++){
        cout<<nums[i];
    }
    cout<<endl;
}

int main(){
    int t;
    int n;
    int ans;
    cin>>t;
    while(t--){
        cin>>n;
        ans = answer(n);
        if(ans==1){
            print();
        }
        else{
            printf("-1\n");
        }
    }
}
