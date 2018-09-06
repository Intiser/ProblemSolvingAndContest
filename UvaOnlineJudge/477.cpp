#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,k,l;
    char c[10];

    double x1[10],x2[10],y1[10],y2[10],A,B,r[10],c1[10],c2[10],d;
    i=0;
    while(cin>>c[i])
    {
        if(c[i]!='*')
        {
          if(c[i]=='r')
          {
        cin>>x1[i]>>y2[i]>>x2[i]>>y1[i];
       // cout<<x1[i]<<" "<<y1[i]<<endl;
        i++;
          }
          else
          {
              cin>>c1[i]>>c2[i]>>r[i];
              i++;

          }

        }
        else
            break;
    }

    for(j=1;cin>>A>>B;j++)
    {
        if(A!=9999.9&&B!=9999.9)
        {
          for(k=0,l=0;k<=i;k++)
          {if(c[k]=='r')
          {
              if(((B>y1[k]&&B<y2[k])&&(A>x1[k]&&A<x2[k])))
              {
                  l++;

              cout<<"Point "<<j<<" is contained in figure "<<k+1<<endl;
              }
          }
            else if(c[k]=='c')
            {
             if(((c1[k]-A)*(c1[k]-A)+(c2[k]-B)*(c2[k]-B)<(r[k]*r[k])))
            {
                cout<<"Point "<<j<<" is contained in figure "<<k+1<<endl;
            l++;
            }
            }


          }
          if(l==0)
           cout<<"Point "<<j<<" is not contained in any figure"<<endl;

        }
        else
            break;

    }





}
