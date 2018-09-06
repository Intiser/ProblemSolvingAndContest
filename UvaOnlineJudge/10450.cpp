#include<iostream>
#include<math.h>
#include<stdio.h>

using namespace std;


int main()
{
    long long int t,n,i,FR;//F;
   double a,f,f1,b,F;

    cin>>t;

    for(i=0;i<t;i++)
    {

        cin>>n;

        a=(1+sqrt(5))/2;

       f=pow(a,n+2);
       f1=pow((1-a),n+2);
       b=sqrt(5);
       F=(f-f1)/b;
       FR=F;

      cout<<"Scenario #"<<i+1<<":"<<endl;

      printf("%.0lf\n",F);

      cout<<endl;

    }

}
