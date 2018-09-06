#include<iostream>
#include<stdio.h>

using namespace std;
int Array[2000000];

void swap1(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

 int partition1(int p,int q)
{
   int pvt,i,j,left;
   pvt=Array[p];
   i=p;
   j=q;
   left=p;
   for(i=p+1;i<=q;i++)
   {
       if(Array[i]<pvt)
       {
        left=left+1;
        swap1(&Array[i], &Array[left]);
       }
   }
       swap1(&Array[p],&Array[left]);

    return left;
}
void quicksrt(int a,int b)
{
    int m;
    if(a==b)
        return ;
    else
    {
        m=partition1(a,b);
        quicksrt(a,m);
        quicksrt(m+1,b);

    }


}


int main()
{
    int n,i,j,p;

    while(scanf("%d",&n))
    {
        p=n-1;
        for(i=0;i<n;i++)
    scanf("%d",&Array[i]);

        //quicksrt(0,n);

      for(i=0;i<n;i++)
                printf("%d ",Array[i]);

                printf("\n");

    }


}
