#include<iostream>
#include<stdio.h>

using namespace std;

int Sum[101][101],Arr[101][101];

int main()
{
     int n,i,j,sum,k,temp1,temp2,maxm;


    while(cin>>n)
    {
         for(j=0;j<n;j++)
         {
               for(i=0;i<n;i++)
               {

                scanf("%d",&Arr[j][i]);

               if(j==0)
               {
                Sum[j][i]=Arr[j][i];
               }
               else
               {
                Sum[j][i]=Sum[j-1][i]+Arr[j][i];

                }

               }

         }
     maxm=0;

       for(i=0;i<n;i++){
           for(j=i;j<n;j++){
                temp1=0; temp2=0;
                for(k=0;k<n;k++){
                    temp1=temp1+Sum[i][k];
                    temp2=temp2+Sum[j][k];
                    sum=temp2-temp1;
                    if(sum<0){
                        sum=0; temp1=0; temp2=0;
                    }
                    if(maxm<sum){
                        maxm=sum;
                    }
                }
            }
       }


     cout<<maxm<<endl;



    }

}
