#include<iostream>
#include<stdio.h>

using namespace std;

int H[4000],N[200];

int main()
{
    int t,n,m,i,j,k,l,cnt,days;

    cin>>t;

    for(l=0;l<t;l++)
    {
        scanf("%d",&m);
        scanf("%d",&n);
        for(k=0;k<n;k++)
            scanf("%d",&N[k]);

        cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=1;j*N[i]<=m;j++)
            {
              days=j*N[i];
              if((days%7)!=6&&(days%7)!=0)
                {
                    if(H[days]==0)
                    {
                     H[days]++;
                     cnt++;
                     //cout<<days<<endl;
                    }
                    else
                        H[days]++;

                }

            }
        }


        cout<<cnt<<endl;

        for(j=0;j<4000;j++)
           H[j]=0;
    }

}
