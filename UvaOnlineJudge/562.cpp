#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int C[110];

int main()
{
    int t,n,i,j,k,sum,div,term,dif;

    cin>>t;

    for(k=0;k<t;k++)
    {
          cin>>n;
          sum=0;
          for(j=0;j<n;j++)
          {
              scanf("%d",&C[j]);
              sum=sum+C[j];
          }

          div = sum / 2;

         sort(C,C+n);

         term=0;
          for(j=n-1;j>=0;j--)
          {
              if(term+C[j]<=div)
              {
                  term= term+ C[j];
              }
              if(term==div)
                break;

          }
         dif=sum-(2*term);

          cout<<dif<<endl;


    }

}
