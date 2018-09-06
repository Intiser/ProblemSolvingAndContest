#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int MT[205][205];


int main()
{
     int n,l,i,j,k,a,b,flag;

    while(cin>>n)
    {
       // memset(MT,0,205);
       if(n==0)
        break;

        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a>>b;
            MT[a][b]=1;
            MT[b][a]=1;

        }

        flag=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=j){
                    if(MT[i][j]==1)
                    {
                       for(k=0;k<n;k++)
                      {
                        if(MT[i][k]==MT[j][k]&&MT[i][k]==1&&MT[j][k]==1)
                          {
                              flag=1;
                              //cout<<i<<" "<<j<<" "<<k<<endl;
                          }
                           if(flag==1)
                            break;
                      }

                    }
                }
                    if(flag==1)
                            break;

            }
            if(flag==1)
                break;

        }
             if(flag==0)
               printf("BICOLORABLE.\n");
               else
                 printf("NOT BICOLORABLE.\n");

               for(i=0;i<n;i++)
               {
                   for(j=0;j<n;j++)
                    MT[i][j]=0;
               }


    }

}
