#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,c,n,a[1000],i,j,cnt;
    double avg,prct,total,p,q;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
     for(j=0,total=0;j<n;j++)
     {
         cin>>a[j];
         total=total+a[j];
     }
     avg=total/n;

     for(j=0,cnt=0;j<n;j++)
    {
     if(a[j]>avg)
        cnt++;


     }
     p=cnt;
     q=n;
     prct=(p/q)*100;

     printf("%.3lf%%\n",prct);


    }
}
