#include<iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int P[20010];

int main()
{
    int t,n,p,i,j,k,l,Maxm;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;

        for(j=0;j<n;j++)
        {
            scanf("%d",&P[j]);
        }

        sort(P,P+n);

        l=n%3;
        if(l==0)
        {
            l=2;
        }
        else
            l=l-1;

        Maxm=0;

        for(j=n-3;j>=0;j=j-3)
          {
              Maxm=Maxm+P[j];


          }

          cout<<Maxm<<endl;

    }
}
