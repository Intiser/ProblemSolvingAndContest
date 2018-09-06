#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    int a,b,c;
    int x = 1234567;
    int y = 123456;
    int z = 1234;
    int fl = 0;
    cin>>n;
    for(int i=0;i*x<=n;i++){
        for(int j=0;i*x+j*y <= n;j++){
            int p = j*y;
            int q = n - (i*x+p);
            if(q%z==0){
                fl = 1;
                break;
            }
        }
        if(fl==1) break;
    }
    if(fl == 1 ) printf("YES\n");
    else printf("NO\n");
}

