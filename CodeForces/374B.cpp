#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

vector<string>inter;

int arr[150];

int main(){
    int n,m;
    string s;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>s;
        inter.push_back(s);
    }
    cin>>s;
    sort(inter.begin(),inter.end());
    for(int i=0;i<n;i++) cout<<inter[i]<<endl;
}

