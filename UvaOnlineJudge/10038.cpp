#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int n,i,j,k,N[3003],dif[3003],flag,in;

    while(cin>>n)
    {
       for(k=0;k<n;k++)
       {
           scanf("%d",&N[k]);

               if(k!=0)
               {

                    if(N[k]>N[k-1])
                        dif[k-1]=N[k]-N[k-1];
                    else
                        dif[k-1]=N[k-1]-N[k];

               }

       }

          sort(dif,dif+(n-1));

          in=n-1;
           flag=0;
           for(j=0;j<n-1;j++)
           {
               if(dif[j]!=j+1)
               {
                   flag=1;
                   break;
               }

           }



        if(flag==1)
        {
            cout<<"Not jolly"<<endl;
        }
        else
            cout<<"Jolly"<<endl;



    }

}
