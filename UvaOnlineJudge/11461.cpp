#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
    int a,b,p,q,ans;

    while(cin>>a>>b)
    {
        if(a==0&&b==0)
            break;

      p=floor(sqrt(a));
      q=floor(sqrt(b));
      ans=q-p;

      if(p*p==a)
      {
        ans=ans+1;
      }
      else
        ans=ans;

      cout<<ans<<endl;


    }

}
