#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

#define mx 105




int Vi[mx];
vector<int>G[mx];
vector<int>C;

int Vst[mx],frst,hl;


void DFS(int n)
{
    int v,x,l;


    if(frst==1)
      frst=0;
    else
    Vst[n]=1;


        l=G[n].size();
    for(x=0;x<l;x++)
        {
           v=G[n][x];


            if(Vst[v]!=1)
            {

              DFS(v);
            }



        }
        return ;


}



int main()
{
   int n,m,i,j,k,a,t,inp[mx];
   while(cin>>n&&n)
   {
       // if(n==0)
       // break;

          while(cin>>m&&m)
          {
           //if(m==0)
           //break;

                 while(cin>>a&&a)
                 {
                // if(a==0)
                 //  break;

                  G[m].push_back(a);

                 }


          }

          cin>>t;
          for(i=0;i<t;i++)
          {
            scanf("%d",&inp[i]);
          }

         int cnt;
         for(i=0;i<t;i++)
          {
               memset(Vst,0,105);
                frst=1;
                hl=inp[i];
                DFS(hl);
                 cnt=0;
               /* for(j=1;j<=n;j++)
                {
                     if(Vst[j]==0)
                     {cnt++;

                      }


                }
                printf("%d",cnt);


               for(j=1;j<=n;j++)
                {
                 if(Vst[j]==0)
                 printf(" %d",j);



                }



                printf("\n");*/

              //  for(j=0;j<105;j++)
                //    Vst[j]=0;
                for(k=1;k<=n;k++)
                   if(Vst[k]==0)
                   C.push_back(k);

                  printf("%d",C.size());
                  for(j=0;j<C.size();j++)
                      printf(" %d",C[j]);
                   printf("\n");


                C.clear();

          }

          for(i=1;i<=mx;i++)
                G[i].clear();







   }

   return 0;


}
