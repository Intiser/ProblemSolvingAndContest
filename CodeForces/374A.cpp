#include<iostream>

using namespace std;

int arr[150];

int main(){
    int n;

    string s;
    cin>>n;
    cin>>s;
    int cnt = 0;
    int fl = 0;
    int len = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'&&fl==1){
            len++;
        }
        else if(s[i]=='B'&&fl==0){
            cnt++;
            len = 1;
            fl = 1;
        }
        else if(fl==1){
            arr[cnt] = len;
            len = 0;
            fl = 0;
        }
    }
    if(fl==1&&len>0){
        arr[cnt] = len;
    }
    cout<<cnt<<endl;
    for(int i=1;i<=cnt;i++){
        if(i==1) cout<<arr[i];
        else cout<<" "<<arr[i];
    }
    if(cnt>0)
    cout<<endl;
}
