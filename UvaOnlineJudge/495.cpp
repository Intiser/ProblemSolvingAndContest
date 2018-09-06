#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
   long long int n,i,FR;//F;
    double a,f,f1,b,F;

    while(cin>>n)
    {if(n==0)
    {
        F=0;
         printf("The Fibonacci number for %d is %.0lf\n",n,F);
    }
    else if(n==1)
    {
         F=1;
       printf("The Fibonacci number for %d is %.0lf\n",n,F);
    }
    else
   {
      a=(1+sqrt(5))/2;

       f=pow(a,n);
       f1=pow((1-a),n);
       b=sqrt(5);
       F=(f-f1)/b;


      printf("The Fibonacci number for %lld is %.0lf\n",n,F);


    }
    }
}
