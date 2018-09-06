#include<iostream>
#include<stdio.h>

using namespace std;

long long int mod(int b,int p,int m){
    if(p==0) return 1;
    if(p==1) return b;

    long long int x=mod(b,p/2,m);
    x=(x*x)%m;
    if(p%2==1) x=(x*b)%m;
    return x;
}

int main()
{
    int B,P,M,x,y,z,m;
    long long int ans;
    while(cin>>B>>P>>M)
    {
        ans=mod(B,P,M);
        cout<<ans<<endl;
    }

}
