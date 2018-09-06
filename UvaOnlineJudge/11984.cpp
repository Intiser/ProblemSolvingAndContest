#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,i,j;
    double c,d,f,F,C;

    cin>>t;

    for(i=0;i<t;i++)
    {
      cin>>c>>d;

      f=((9*c)/5)+32;
      F=f+d;
      C=((F-32)*5)/9;

      printf("Case %d: %.2lf\n",i+1,C);
      //cout<<C<<endl;

    }

}
