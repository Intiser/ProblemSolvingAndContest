#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int D,I,ttl,len,i,j,n,K,t,l,End,p;

cin>>t;

    for(l=0;l<t;l++)
    {
        cin>>D>>I;

       len=pow(2,D)-1;
       n=I;
       K=I;
       i=1;
       p=1;
       while(i<=len&&(n>=1||K--))
       {
           if(n%2==0)
           {
            if(p%2==1)
             { n=n/2;
               j=i;
               i=2*i+1;
             }
             else
             {
                 if(n>1)
               n=n/2;

               j=i;
               i=2*i;

             }
           }
           else
           {
               if(p%2==1)
         {
             if(n>1)
               n=n/2;

               j=i;
               i=2*i;
         }
         else
         {
             n=n/2;
               j=i;
               i=2*i+1;
         }



           }

        p++;

       }

       cout<<j<<endl;

        //cout<<len<<endl;
    }

}
