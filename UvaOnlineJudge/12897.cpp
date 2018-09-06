#include<iostream>
#include<stdio.h>

using namespace std;

int arr[150];
int flag[150];

int main(){
    int t,n,c,tmp;
    string s,ans;
    char a,b;
    cin>>t;
    while(t--){
        cin>>s;
        cin>>n;
        for(int i=0;i<130;i++){
             arr[i]=i;
             flag[i]=i;
        }
        for(int i=0;i<n;i++){
            cin>>a>>b;
            for(int j='A';j<='Z';j++){
                if(arr[j]==b){
                    arr[j]=a;
                }
            }
        }
        int len=s.size();
        ans.clear();
        for(int i=0;i<len;i++){

            ans.push_back(arr[s[i]]);
        }
        cout<<ans<<endl;
    }
}
