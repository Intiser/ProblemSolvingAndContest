#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
    double val,tot,a,b,c;
    int n,term,i,j,k,x,y,key;

    while(cin>>val)
    {
      tot=val*2;
      key=(int)val;
        //cout<<tot<<endl;
         //printf("%lf\n",tot);
       a=1,b=1,c=-tot;

            n=floor((b*b+sqrt(b*b-4*a*c))/(2*a)-1);

         //cout<<n<<endl;
         term=(n*(n+1))/2;

         if(n%2==0)
         {
             if(term==key)
             {
               x=n; y=1;
             }
             else
             {
                 x=n+1; y=1; term++;
                 while(term!=key)
                 {
                     x--; y++;
                     term++;

                 }

             }

         }
         else
         {
              if(term==key)
             {
                 x=1; y=n;
             }
             else
             {
                 x=1; y=n+1; term++;
                  while(term!=key)
                 {
                     x++; y--;
                     term++;

                 }
             }
         }


         printf("TERM %d IS %d/%d\n",key,x,y);


    }

}
