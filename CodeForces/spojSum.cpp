#include<iostream>

using namespace std;

int main(){
    int n,m;
    int tot;
    while(cin>>n>>m){
        tot = 0;
        for(int i=n;i<=m;i++){
            tot = tot + i*i;
        }
        cout<<tot<<endl;
    }
}
