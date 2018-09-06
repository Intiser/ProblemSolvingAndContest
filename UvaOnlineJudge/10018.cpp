#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


int main()
{
    char  str[1000];

    int t,i,j,k,M,N,P,Q,Sum,cnt,cr,c,ch,cf,len;

    cin>>t;

     for(i=0;i<t;i++)
     {
         cin>>N;
          M=N;
          for(j=0;j<4;j++)
             {
                 P=0;
                 Q=M;

                 for(k=1,len=0,cr=1;cr>0;len++,k=k*10)
                 {
                    cr=M/k;

                 }

                 for(k=0,cf=1,ch=1;M>0;k++)
                 {
                     c=M%10;
                     M=M/10;
                     P=P+c*cf;
                     cf=cf*10;
                 }

                 Sum=P+Q;
                 M=Sum;
                 cout<<len<<endl;
             }

            cout<<Sum<<endl;

     }

}
