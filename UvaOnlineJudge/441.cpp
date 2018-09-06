#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n,i,j,k,p,q,r,s,C1,C2,C3,C4,C5,C6,P1,P2,P3,P4,P5,P6,st=0,l;
    int Arr[15];         //={1,2,3,5,8,13,21,34};
    while(cin>>n)
    {
        if(n==0)
            break;
        if(st==1)
            printf("\n");
        st=1;

         for(l=0;l<n;l++)
           scanf("%d",&Arr[l]);

         C1=1; C2=2;C3=3; C4=4 ; C5=5; C6=6;

         P1=0; P2=0; P3=0; P4=0 ; P5=0; P6=0;

       for(s=0;;s++)
       {
           for(i=0+P1;;i++)
           {
               printf("%d ",Arr[i]);
               i++;
               break;
           }
           for(j=i+P2;;j++)
           {
               printf("%d ",Arr[j]);
                if(j==n-5)
               {
                   P2=-1;
                   P1++;
                   P6=0;
                   P5=0;
                   P4=0;
                   P3=0;
               }
               j++;
               break;
           }
           for(k=j+P3;;k++)
           {
               printf("%d ",Arr[k]);
                if(k==n-4)
               {
                   P3=-1;
                   P2++;
                   P6=0;
                   P5=0;
                   P4=0;
               }
               k++;
               break;
           }
           for(p=k+P4;;p++)
           {
               printf("%d ",Arr[p]);
               if(p==n-3)
               {
                   P4=-1;
                   P3++;
                   P6=0;
                   P5=0;
               }
               p++;
               break;
           }
           for(q=p+P5;;q++)
           {

               printf("%d ",Arr[q]);
               if(q==n-2)
               {
                   P5=-1;
                   P4++;
                   P6=0;
               }
               q++;
               break;
           }
           for(r=q+P6;;r++)
           {
               P6++;
               C6++;
               printf("%d",Arr[r]);
               if(r==n-1)
               {
                   P6=0;
                   P5++;

               }
               r++;
               break;
           }
           printf("\n");
           if(i==n-5)
            break;

       }



    }

}
