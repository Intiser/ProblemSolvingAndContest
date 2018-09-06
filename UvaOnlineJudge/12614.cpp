#include<iostream>
#include<stdio.h>

using namespace std;

long long int arr[100];
string s[100];

string fun(string a,string b){
    string tmp;
    int l1 = a.size();
    int l2 = b.size();
    int fl = 0;
    for(int i=0;i<l1&&i<l2;i++){
        if(a[i]==b[i]){
            tmp.push_back(a[i]);
            fl = 1;
        }
        else tmp.push_back('0');
    }
    if(fl==0) tmp = "0";
    return tmp;
}

void tran(int in){
    s[in].clear();
    long long x = arr[in];
    int t;
    while(x/2){
        t = x%2;
        x = x/2;
        if(t==1) s[in].push_back('1');
        else s[in].push_back('0');
    }
    if(x) s[in].push_back('1');
}

int main(){
    long long n;
    int t;
    string tp;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>n;
        for(int k=0;k<n;k++){
            cin>>arr[k];
            tran(k);
        }
        tp = s[0];
        for(int k=1;k<n;k++){
            tp = fun(tp,s[k]);
        }
        long long int y=0;
        long long int z=1;
        int len = tp.size();
        if(tp!="0")
        for(int i=len-1;i>=0;i--){
            if(tp[i]=='1'){
                    y+=z;
            }

            z = z*2;
        }
        cout<<z<<endl;
    }
}
