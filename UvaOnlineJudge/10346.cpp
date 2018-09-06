#include<iostream>

using namespace std;

int main()
{
    int i,n,k,dvd=1,total,c;

    while(cin>>n>>k)
    {
       total=n;
       dvd=1;
      for(i=0;dvd>=1;i++)
       {
           dvd=n/k;
       c=n%k;

       total=total+dvd;
       n=dvd+c;
       }

       cout<<total<<endl;
    }

}
