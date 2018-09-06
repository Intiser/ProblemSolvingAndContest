#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,N[100],i,j,k,l,swp,temp;

    while(cin>>n)
    {
       if(n==0)
        break;

       for(i=0;i<n;i++)
        scanf("%d",&N[i]);

       swp=0;
       for(i=0;i<n;i++)
       for(j=1;j<n-i;j++)
       {
           if(N[j]<N[j-1])
           {
               temp=N[j];
               N[j]=N[j-1];
               N[j-1]=temp;
               swp++;
           }
       }

       cout<<swp<<endl;

    }

}
