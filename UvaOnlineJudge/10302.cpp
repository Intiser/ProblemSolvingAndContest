#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{

    double s;
    long long int n,a,b,c;

    while(cin>>n)
    {
          b=n*n;
        a= b+n;
       c=a/2;;
         s=pow((n*n+n),2)/4;

         //cout<<c<<endl;
         cout<<c*c<<endl;
       //printf("%.0lf\n",s);
    }

}
