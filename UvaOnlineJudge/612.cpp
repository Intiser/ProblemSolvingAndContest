#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>

using namespace std;

pair<int,int>arr[105];

int main(){
    string s[105],ans[105];
    int t,n,m,cnt;
    cin>>t;
    while(t--){
        cin>>m>>n;
        cin.ignore();
        for(int i=0;i<n;i++) {
                cin>>s[i];
                ans[i]=s[i];
        }
        //for(int i=0;i<n;i++) cout<<ans[i]<<endl;
        for(int k=0;k<n;k++){
            cnt=0;
            for(int i=0;i<m;i++){
                for(int j=1;j<m-i;j++){
                    if(s[k][j]<s[k][j-1]){
                        cnt++;
                        swap(s[k][j],s[k][j-1]);
                    }
                }
            }
            arr[k].first=cnt;
            arr[k].second=k;
        }
        sort(arr,arr+n);
        for(int i=0;i<n;i++) cout<<ans[arr[i].second]<<endl;
        if(t!=0) cout<<endl;
    }
}
