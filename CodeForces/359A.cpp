#include<iostream>

using namespace std;

#define lli long long int

int main(){
    lli n,x;
    char c;
    lli cnt = 0;
    lli t;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>c>>t;
        if(c=='+'){
            x = x + t;
        }
        else if(c=='-'){
            if(x-t>=0){
                x = x - t;
            }
            else
                cnt++;
        }
    }
    cout<<x<<" "<<cnt<<endl;
}
