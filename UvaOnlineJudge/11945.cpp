#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,i,j,to;
    double m,n,tal,avg;

    cin>>t;

    for(i=0;i<t;i++)
    {

        for(j=0,n=0;j<12;j++)
        {
            cin>>m;

            n=n+m;

        }
        avg=n/12;

        to=avg/1000;
        tal=avg-(to*1000);

        if(to>0)
        {
          printf("%d $%d,%.2lf\n",i+1,to,tal);
        }
        else
          printf("%d $%.2lf\n",i+1,tal);


    }


}
