#include<iostream>
#include<stdio.h>

using namespace std;

int Arr[105][105],Sum[105][105];

int main()
{
    int M,N,i,j,k,l,p,q;
    int st,en,total,term,maxm,dc,dv,cr,H1,H2,key,temp;

    while(cin>>M>>N)
    {
        if(M==0&&N==0)
            break;

           for(i=0;i<M;i++)
         { for(j=0;j<N;j++)
           {
               scanf("%d",&Arr[i][j]);
               if(i==0)
               {
                   if(Arr[i][j]==0)
                   Sum[i][j]=1;
                   else
                   Sum[i][j]=0;

               }
               else
               {
                   if(Arr[i][j]==0)
                   Sum[i][j]=Sum[i-1][j]+1;
                   else
                    Sum[i][j]=0;
               }
           }
         }

        //  printf("\n");

   /*       for(i=0;i<M;i++)
         { for(j=0;j<N;j++)
           {
               printf("%d ",Sum[i][j]);

           }
           printf("\n");
         }
*/

        maxm=0;dv=0;
        for(i=0;i<M;i++){
            total=0;cr=0;
            for(j=0;j<N;j++){
                temp=Sum[i][j];
                p=j+1; q=j-1;
                while(Sum[i][p]>=Sum[i][j]&&p<N){
                    temp=temp+Sum[i][j];
                    p++;
                }
                while(Sum[i][q]>=Sum[i][j]&&q>=0){
                    temp=temp+Sum[i][j];
                    q--;
                }
                if(maxm<temp) maxm=temp;
               }
           }


           cout<<maxm<<endl;


    }

}
