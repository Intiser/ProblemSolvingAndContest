#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,j,k,l;
    char c;

    double x1[10],x2[10],y1[10],y2[10],A,B;
    i=0;
    while(cin>>c)
    {
        if(c!='*')
        {
        cin>>x1[i]>>y2[i]>>x2[i]>>y1[i];
       // cout<<x1[i]<<" "<<y1[i]<<endl;
        i++;


        }
        else
            break;
    }

    for(j=1;cin>>A>>B;j++)
    {
        if(A!=9999.9&&B!=9999.9)
        {
          for(k=0,l=0;k<=i;k++)
          {
              if((B>y1[k]&&B<y2[k])&&(A>x1[k]&&A<x2[k]))
              {
                  l++;

              cout<<"Point "<<j<<" is contained in figure "<<k+1<<endl;
              }



          }
          if(l==0)
           cout<<"Point "<<j<<" is not contained in any figure"<<endl;

        }
        else
            break;

    }





}
