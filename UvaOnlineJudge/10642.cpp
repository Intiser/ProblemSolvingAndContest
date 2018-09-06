#include<iostream>
#include<stdio.h>

using namespace std;

long long int funct(long long int x,long long int y)
{
    long long int n,term,a,total;
    a=x-1;
    n=(y+a-1);

    term=(n*(n+1))/2;

    total=term+a+1;

    return total;

}

int main()
{
     long long int x1,x2,y1,y2,t1,t2,ans,i,t;

      cin>>t;
     for(i=0;i<t;i++)
      {
           cin>>x1>>y1>>x2>>y2;
          t1=funct(x1+1,y1+1);
          t2=funct(x2+1,y2+1);
          if(t2>t1)
          ans=t2-t1;
          else
            ans=t1-t2;

           printf("Case %lld: %lld\n",i+1,ans);
          //cout<<ans<<endl;
      }

}
