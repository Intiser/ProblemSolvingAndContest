#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int t,n,m;
    string s;
    cin>>t;
    for(int cas = 1;cas<=t;cas++){
        cin>>n>>m;
        for(int i=0;i<n+m;i++)
            cin>>s;
        printf("Case %d: ",cas);
        cout<<m*n<<endl;
    }
}
