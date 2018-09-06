#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
     long long int n,Arr[1010],i,j,k,cnt,temp;

    while(cin>>n)
    {

      for(k=0;k<n;k++)
        {
            scanf("%lld",&Arr[k]);
        }

        cnt=0;
       for(i=0;i<n;i++)
       {
           for(j=1;j<n-i;j++)
           {
               if(Arr[j]<Arr[j-1])
               {
                  temp=Arr[j];
                  Arr[j]=Arr[j-1];
                  Arr[j-1]=temp;
                   cnt++;

               }

           }
       }



       printf("Minimum exchange operations : %lld\n",cnt);

    }

}
