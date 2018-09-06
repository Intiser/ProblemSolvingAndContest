#include<iostream>
#include<math.h>

using namespace std;



int main()
{

    long long int t,n,ans,x1,x2,a,b,c;
cin>>t;
   while(t-- )
{
    cin>>n;

a=1; b=1; c=-(2*n);
x1=floor((-b+sqrt(b*b-4*a*c))/(2*a));


    cout<<x1<<endl;

}

}
