#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
   long long int t,x,y,i,j,k,total;
    double dif,avg,X1,xy,a,b,c,fil;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>x>>y;

        dif=y-x;
       // if(dif>1)
         // {
              //avg=dif/2;
              a=1; b=1; c=-dif;

              //xy=(-b-sqrt(b*b-4*a*c))/2*a;
              X1=floor((-b+sqrt(b*b-4*a*c))/2*a);

              xy=2*((X1*(X1+1))/2);
              fil=dif-xy;
              for(k=1,j=0;k>0&&fil!=0;)
                {
                    k=fil/(X1+1);
                    fil=fil-(X1+1);
                    j++;

                }
                total=2*X1+j;

               cout<<total<<endl;

         // }

         //cout<<X1<<endl;
         // cout<<xy<<endl;


    }

}
