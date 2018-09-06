#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int t,n,i,j,B,W,A,T;
    char c[200];

    cin>>t;
    for(i=0;i<t;i++)
    {
      cin>>n;
      B=0; W=0; A=0; T=0;
      for(j=0;j<n;j++)
         {
             cin>>c[j];
             if(c[j]=='B')
                B++;
            else if(c[j]=='W')
                    W++;
                else if(c[j]=='A')
                    A++;
                    else if(c[j]=='T')
                    T++;
         }
         if(n==A)
         {
             cout<<"Case "<<i+1<<": ABANDONED"<<endl;
         }
         else if(T==0&&W==0)
         {
             cout<<"Case "<<i+1<<": BANGLAWASH"<<endl;
         }
         else if(T==0&&B==0)
         {
             cout<<"Case "<<i+1<<": WHITEWASH"<<endl;
         }
         else if(B==W)
         {
              cout<<"Case "<<i+1<<": DRAW "<<B<<" "<<T<<endl;
         }
         else if(B>W)
         {
               cout<<"Case "<<i+1<<": BANGLADESH "<<B<<" - "<<W<<endl;
         }
         else
                cout<<"Case "<<i+1<<": WWW "<<W<<" - "<<B<<endl;




    }

}
