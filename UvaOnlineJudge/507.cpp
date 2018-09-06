#include<iostream>
#include<stdio.h>

using namespace std;

int S[20020];

int main()
{

    int t,i,j,k,n,St,s,En,e,maxm,temp;

    cin>>t;

    for(k=0;k<t;k++)
    {
       scanf("%d",&n);
       temp=0; maxm=0; s=0;
       En=0 ; St=0;
       for(j=0;j<n-1;j++)
       {
        scanf("%d",&S[j]);

        temp=temp+S[j];

        if(temp<0)
        {
            temp=0;
            s=j+1;
        }

        if(maxm<temp||(maxm==temp&&(En-St)<(j+1-s)))
        {
            maxm=temp;
            St=s;
            En=j+1;
        }


       }

       if(maxm>0)
        printf("The nicest part of route %d is between stops %d and %d\n",k+1,St+1,En+1);//cout<<St+1<<" "<<En+1<<endl;
       else
       printf("Route %d has no nice parts\n",k+1);//cout<<"No"<<endl;

    }

}
