#include<iostream>

using namespace std;

int main()
{
    long long int a,b,c,i,j,m,n,p,q,r,term;

    while(cin>>a>>b)
    {
        n=a;
        m=b;
      for(i=0,j=1,term=0;n!=0||m!=0;i++)
        {

           p=n%2;
           q=m%2;

           n=n/2;
           m=m/2;

           if(p+q==1)
            r=1;
           else
            r=0;

           term=term+r*j;

           j=j*2;

        }

        cout<<term<<endl;
    }

}
