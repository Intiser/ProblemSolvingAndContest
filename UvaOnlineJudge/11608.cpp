#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,total,i,j,k,R[14],P[14],l=1;

    while(cin>>n)
    {
        if(n<0)
            break;

        total=n;

        for(k=0;k<12;k++)
            scanf("%d",&P[k]);
        for(k=0;k<12;k++)
            scanf("%d",&R[k]);

         printf("Case %d:\n",l);
        for(j=0;j<12;j++)
        {
            if(total>=R[j])
            {
                total=total-R[j];

                printf("No problem! :D\n");
            }
            else
            {
               printf("No problem. :(\n");
            }

            total=total+P[j];

        }
        l++;

    }

}
