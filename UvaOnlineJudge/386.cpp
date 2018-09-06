#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    long long int i,j,k,l,A,B,C,D,minm;

    for(i=1;i<=200;i++)
    {
       for(j=2;j<=200;j++)
       {
           for(k=j;k<=200;k++)
           {
               for(l=k;l<=200;l++)
               {
                   if(i*i*i==(j*j*j+k*k*k+l*l*l))
                   {
                      A=i;
                     /* B=min(j,(k,l));

                      if(B==j)
                      {
                          C=min(k,l);
                          D=max(k,l);
                      }
                      else  if(B==k)
                      {
                          C=min(j,l);
                          D=max(j,l);
                      }
                      else if(B==l)
                      {
                          C=min(k,j);
                          D=max(k,j);
                      }*/
                      B=j; C=k; D=l;

                      printf("Cube = %lld, Triple = (%lld,%lld,%lld)\n",i,j,k,l);


                   }

               }
           }
       }

    }

}
