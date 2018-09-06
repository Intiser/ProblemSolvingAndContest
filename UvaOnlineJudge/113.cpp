#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{

    double n,p,k;


    while(cin>>n>>p)
    {
      k=pow(p,1/n);

        printf("%.0lf\n",k);
    }


}
