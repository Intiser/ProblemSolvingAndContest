#include<iostream>
#include<stdio.h>

using namespace std;

int GCD(int x,int y)
{
    int q,r,S,L;
    L=y; S=x;
    q=L/S; r=L%S;
    L=S; S=r;
    while(r!=0)
    {
       q=L/S; r=L%S;
    L=S; S=r;
    }

    return L;

}


int main()
{
    int n,i,j,G;

    while(cin>>n)
    {
        if(n==0)
            break;

      G=0;
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
               G=G+GCD(i,j);
            }

        }

        cout<<G<<endl;

    }

}
