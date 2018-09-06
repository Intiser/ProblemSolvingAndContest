#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int N[1010],M[30];

int main()
{
    int n,m,i,j,k,c=1,val,minm,dis,sum,key,dis_min;

    while(cin>>n)
    {
        if(n==0)
            break;
            for(k=0;k<n;k++)
                scanf("%d",&N[k]);

        cin>>m;

         for(k=0;k<m;k++)
                scanf("%d",&M[k]);

        printf("Case %d:\n",c);
        for(k=0;k<m;k++)
        {
            key=M[k];
            dis_min=0;

            for(i=0;i<n;i++)
             {
                 for(j=0;j<n;j++)
                 {
                     if(i==j)
                        j++;
                     if(j==n)
                        break;

                     sum=N[i]+N[j];
                      dis=abs(sum-key);
                      if(dis_min>dis||(i==0&&j==1))
                      {
                          dis_min=dis;
                          minm=sum;
                      }
                 }
             }

             printf("Closest sum to %d is %d.\n",M[k],minm);
        }


      c++;


    }

}
