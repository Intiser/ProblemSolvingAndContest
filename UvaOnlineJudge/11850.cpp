#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int Dis[1500];

int main()
{
    int n,i,j,k,flag,st=0,en=1422,dis;

    while(cin>>n)
    {
        if(n==0)
            break;

        for(k=0;k<n;k++)
        {
            scanf("%d",&Dis[k]);
        }
        sort(Dis,Dis+n);

       flag=0;

        for(k=0;k<=n;k++)
        {
            if(k==0)
            {
                dis=Dis[0]-0;
                if(dis>200)
                    flag=1;
            }
            else if(k==n)
            {
                dis=1422-Dis[n-1];
                if(dis>100)
                    flag=1;
            }
            else
            {
                dis=Dis[k]-Dis[k-1];
                if(dis>200)
                    flag=1;
            }



        }

        if(flag==0)
        {
            printf("POSSIBLE\n");
        }
        else
        {
             printf("IMPOSSIBLE\n");
        }



    }

}
