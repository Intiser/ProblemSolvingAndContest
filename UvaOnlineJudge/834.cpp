#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,m,r,q,a,b;

    while(cin>>n>>m)
    {
       q=n/m;
       r=n-(m*q);
       printf("[%d;",q);
       a=m; b=r;
       while(r!=0)
       {
           q=a/b;
           r=a-(b*q);
           a=b; b=r;
           if(r==0)
           {
               printf("%d]\n",q);
           }
           else
             printf("%d,",q);

       }


    }

}
