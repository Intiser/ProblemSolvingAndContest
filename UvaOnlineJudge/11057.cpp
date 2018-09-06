#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int Arr[10010];


int main()
{
  int n,i,j,k,tot,val,index,st,en,temp;

   while(cin>>n)
   {
       for(k=0;k<n;k++)
       {
           scanf("%d",&Arr[k]);
       }
       cin>>tot;
       val=tot/2;
       sort (Arr,Arr+n);
       index=lower_bound(Arr,Arr+n,val)-Arr;

       /*if(Arr[index]==val)
       {
           i=index;
           j=index+1;
       }
       else
       {
           i=index-1;
           j=index;
       }*/

          i=index-1;
           j=index;

       temp=Arr[i]+Arr[j];

       while(temp!=tot)
       {
           if(temp>tot)
           {
               i--;
           }
           else
           {
               j++;
           }
           temp=Arr[i]+Arr[j];
       }


      cout<<Arr[i]<<" "<<Arr[j]<<endl;

      // cout<<Arr[index]<<endl;
       //cout<<index<<endl;

   }

}
