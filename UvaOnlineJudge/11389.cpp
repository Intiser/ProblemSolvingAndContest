#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n,d,r,D[100],E[100],i,j,k,tot,exp,val;

    while(cin>>n>>d>>r)
    {
       if(n==0&&d==0&&r==0)
        break;

       tot=0;
       for(i=0;i<n;i++)
       {cin>>D[i];

       }
       for(i=0;i<n;i++)
       {cin>>E[i];

       }

         sort(D,D+n);
         sort(E,E+n);

         tot=0;
         for(i=0,j=n-1;i<n;i++,j--)
         {

          val=D[i]+E[j];
          if(val-d>=0)
          {
              tot=tot+(val-d);
          }


         }

         exp=tot*r;


       cout<<exp<<endl;

    }

}
