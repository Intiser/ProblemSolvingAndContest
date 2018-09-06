#include<iostream>
#include<stdio.h>
#include<cmath>
#include<algorithm>

using namespace std;

#define lli long long int

lli arr[205000];
lli temp[205000];

lli cont(int n){
    if(n/10000) return 5;
    if(n/1000) return 4;
    if(n/100) return 3;
    if(n/10) return 2;
    return 1;
}

void pre(){
    arr[1] = 1;
    temp[1] = 1;
    for(int i=2;i<=35000;i++){
        temp[i] = temp[i-1] + cont(i);
        arr[i] =  arr[i-1] + temp[i];

    }
    //cout<<arr[10]<<endl;
    //cout<<arr[35000]<<endl;
}

int check1(int n){
    int st = 1;
    while(arr[st]<n){
        st++;
    }
    return st;
}

int check2(int n){
    int st = 1;
    while(temp[st]<n){
        st++;
    }
    return st;
}

char ret(int n,int p){
    string s;
    while(n/10){
        s.push_back(n%10+'0');
        n = n/10;
    }
    s.push_back(n%10+'0');
    //cout<<n<<" "<<p<<endl;
    reverse(s.begin(),s.end());
    return s[p-1];
}

int main(){
    pre();
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        int ret1 = check1(n);
        int tmp = n-arr[ret1-1];
        int ret2 = check2(tmp);
        cout<<ret(ret2,tmp - temp[ret2-1])<<endl;
    }
}
