#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    int i=1,j,n,ans;
    while(cin>>n)
    {
        if(n==0)
        break;

        ans=n/2;

        printf("Case %d: %d\n",i,ans);
        i++;
    }

}

