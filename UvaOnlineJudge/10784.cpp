#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    long long int N,n,i,j,cnt,tot,k=0;
     double a,b,c,an,m;

    while(cin>>n)
    {if(n==0)
    break;

      a=1;
      b=-3;
      c=-(2*n);

       m=(-b+sqrt(b*b-4*a*c))/2*a;
       N=ceil(m);

       k++;
      cout<<"Case "<<k<<": "<<N<<endl;

    }


}
