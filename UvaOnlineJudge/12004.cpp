#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
   long long int n,t,i,j,k,term,r,c,p,q,a,b,ans;

   cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        term=(n*(n-1))/2;
        //cout<<term<<endl;
        a=term;
        b=n;
        if(a%2!=0)
        {

          //  c=a/b;
           // r=a-c*b;
           // p=a; q=b;
           // a=c; b=r;

           /* r=1;
            while(r!=0)
            {

                c=a/b;
                r=a-c*b;
                if(r==a)
                {
                 r=0;
                }

                p=a; q=b;
                a=c; b=r;

            }*/
            p=term; q=2;
            printf("Case %lld: %lld/%d\n",i+1,p,q);

        }
        else {

            ans=a/2;
             printf("Case %lld: %lld\n",i+1,ans);


        }

    }

}
