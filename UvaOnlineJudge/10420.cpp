#include<bits/stdc++.h>

using namespace std;

map<string,int> arr;

int main(){
    string s,tmp,ans[2000];
    int t,in=0;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        cin.ignore();
        getline(cin,tmp);
        if(arr[s]){
            arr[s]++;
        }
        else{
            ans[in] = s;
            arr[s]++;
            in++;
        }

    }
    sort(ans,ans+in);
    for(int i=0;i<in;i++){
        cout<<ans[i]<<" "<<arr[ans[i]]<<endl;
    }
}
