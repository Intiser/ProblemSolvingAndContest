#include<iostream>
#include<stdio.h>

using namespace std;

int arr[200];

int main(){
    int t,a,initial;
    int n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin.ignore();
        initial = 0;
        for(int i=1;i<=n;i++){
            //getline(cin,s);
            cin>>s;
            if(s == "LEFT"){
                arr[i] = -1;
            }
            else if(s == "RIGHT"){
                arr[i] = 1;
            }
            else{
                cin>>s;
                cin>>a;
                arr[i] = arr[a];
            }
            initial = initial + arr[i];
        }
        cout<<initial<<endl;
    }
}
