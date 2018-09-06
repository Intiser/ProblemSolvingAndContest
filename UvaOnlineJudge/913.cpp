#include<iostream>

using namespace std;

int main()
{
    long long int X,n,s,x,sum;
    while(cin>>X)
    {
      n=((X-1)/2)+1;
      s=(n*(2+(n-1)*2))/2;
      //cout<<s<<endl;
      x=s;
      sum=(x*2-1)+((x-1)*2-1)+((x-2)*2-1);
      cout<<sum<<endl;

    }

}
