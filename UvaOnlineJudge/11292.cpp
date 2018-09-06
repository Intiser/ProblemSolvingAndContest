#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int a[20000],b[20000];

int main()
{
   int n,m,i,j,k;
   int flag,fl,cnt;

   while(cin>>n>>m)
    {
        if(n==0&&m==0)
            break;

             for(i=0;i<n;i++)
                scanf("%d",&a[i]);
             for(i=0;i<m;i++)
                scanf("%d",&b[i]);

              sort(a,a+n);
              sort(b,b+m);

         for(j=0,k=0,cnt=0,fl=0;j<m&&k<n;j++,k++)
            {
                 while(a[k]>b[j])
                 {
                     j++;
                 }

                 if(a[k]<=b[j])
                   {
                       cnt=cnt+b[j];
                       fl++;
                   }


            }
            if(fl==n)
            {
                printf("%d\n",cnt);
            }
            else
                printf("Loowater is doomed!\n");


    }

}
