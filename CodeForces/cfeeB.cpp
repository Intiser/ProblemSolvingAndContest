#include<iostream>
#include<stdio.h>
#include<cmath>
#include<map>

using namespace std;

#define lli long long int

lli arr[30];
map<lli,lli> m;

int main(){
   lli n,tot;
    while(cin>>n){
        tot = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(!m[arr[i]]){
                tot = tot + arr[i];
                m[arr[i]]++;
            }
            else{
                lli in = arr[i];
                while(m[in]&&in>0){
                    in--;
                }
                tot = tot + in;
                m[in]++;
            }
        }
        cout<<tot<<endl;

    }
}
