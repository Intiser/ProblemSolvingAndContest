#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

pair<double,int>Arr[1010];

int main()
{
    int t,n,i,j,k;
    double avg,price,days;

    cin>>t;

    for(k=0;k<t;k++)
   {
     cin>>n;
     for(j=0;j<n;j++)
     {
        cin>>days>>price;

         avg=days/price;

         Arr[j].first=avg;
         Arr[j].second=j+1;

     }
     sort(Arr,Arr+n);

     for(j=0;j<n;j++)
     {
         if(j==n-1)
         {
            printf("%d\n",Arr[j].second);
         }
         else
         printf("%d ",Arr[j].second);
     }

     if(k!=t-1)
     {
         printf("\n");
     }

   }

}
