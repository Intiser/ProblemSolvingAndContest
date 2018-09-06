#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{

    long long int n,m,term,x,y;
    while(cin>>n)
    {
        if(n==0)
        break;

        m=floor(sqrt(n));
        term=m*m;
        if(m%2==0)
        {
            if(term==n)
            {
              x=m; y=1;
            }
            else if((term+m+1)==n)
            {
                x=m+1; y=m+1;
            }
            else if((n-term)>m)
            {

                x=m-(n-(term+m+1))+1; y=m+1;
            }
            else
            {
                x=m+1; y=n-term;
            }

        }
        else
        {
            if(term==n)
            {
                x=1; y=m;
            }
            else if((term+m+1)==n)
            {
                x=m+1; y=m+1;
            }
             else if((n-term)>m)
            {
               x=m+1; y=m-(n-(term+m+1))+1;

            }
            else
            {
                x=n-term; y=m+1;
            }

        }

        printf("%lld %lld\n",x,y);

    }

}
