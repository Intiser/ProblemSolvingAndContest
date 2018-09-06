#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    string st;
    int n;
    int a,b,fl = 0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>st>>a>>b;
        if(a>=2400){
            if(b>a) fl = 1;
        }
    }
    if(fl==1) printf("YES\n");
    else printf("NO\n");
}
