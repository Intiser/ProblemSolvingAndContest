#include<iostream>
#include<stdio.h>

using namespace std;

#define mx 1000010

int sum[1000010],X[1000010],Y[1000010];

int main()
{
    int t,n,i,j,k,c,dig;


    scanf("%d",&t);

    for(k=0;k<t;k++)
    {
        scanf("%d",&n);
        c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&X[i],&Y[i]);

        }

        for(i=n-1;i>=0;i--)
          {
              sum[i+1]=(X[i]+Y[i]+c)%10;
              c=(X[i]+Y[i]+c)/10;



          }
          if(c>0)
          {sum[i+1]=c;
           i=0;
          }
          else
            i=1;
          for(;i<=n;i++)
         {
             printf("%d",sum[i]);
             //printf("%d %d",X[i],Y[i]);
            // sum[i]=0;
         }
         if(k!=t-1)
         printf("\n\n");
         else
            printf("\n");


    }

}
