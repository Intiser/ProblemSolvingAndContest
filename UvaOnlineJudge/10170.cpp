#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;

int main()
{
     //double n1,n2,a,b;//c;
    long long int x,c,n1,n2,a,b,p,q;
    while(cin>>p>>x)
    {
        q=(p*(p-1))/2;
        a=1; b=1; c=-(2*(x+q));

        n1=ceil(((-b+sqrt(b*b-4*a*c))/2*a));
        n2=ceil(((-b-sqrt(b*b-4*a*c))/2*a));

        cout<<n1<<endl;
    }
}
