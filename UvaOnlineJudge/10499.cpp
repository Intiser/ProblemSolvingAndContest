#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

 long long int n;

 while(cin>>n)
    {
    if(n<0)
        break;

      if(n==1)
        printf("0%%\n");
      else
        printf("%lld%%\n",n*25);

    }

}
