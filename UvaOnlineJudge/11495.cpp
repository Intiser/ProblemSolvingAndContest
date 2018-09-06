#include<iostream>
#include<stdio.h>

using namespace std;

int Array[100010],newarr[100010],swaps;

void sorting(int p,int q,int r)
{
   int i,j,l,len;
   //newarr=new int[sizeArray];
   i=p;
   j=q;
   l=p;
   len = q;

   while(i<=q&&j<=r)
   {
       if(Array[i]<=Array[j]&&i<=q)
       {
           newarr[l]=Array[i];
           l++;
           i++;
       }
       else if(Array[j]<Array[i]&&j<=r)
       {
           newarr[l]=Array[j];
           l++;
           j++;
           swaps = swaps +(len-i);
       }


         if(j>r)
         {while(i<=q)
              {newarr[l]=Array[i];
               l++;
              i++;
              }
         }
         else if(i>q)
         {while(j<=r)
              {newarr[l]=Array[j];
               l++;
              j++;

              }
          }


   }

   for(i=p;i<=r;i++)
     {
         Array[i]=newarr[i];
      //  printf("%d\n",Array[i]);
     }




}

void mergesrt(int a, int b)
{
    int m;
    if(a==b)
        return ;
    else
    {
        m=(a+b)/2;
        mergesrt(a,m);
        mergesrt(m+1,b);
        sorting(a,m,b);
    }


}

int main()
{
    int i,j,k,cnt,n;

   while(cin>>n)
   {
       if(n==0)
          break;

      for(k=0;k<n;k++)
      scanf("%d",&Array[k]);

      mergesrt(0,n);

       cout<<swaps<<endl;


   }

}
