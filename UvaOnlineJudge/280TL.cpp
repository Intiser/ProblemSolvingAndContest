#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

#define mx 105


int Vst[mx],frst;
int Vi[mx];
vector<int>G[mx];



void DFS(int n)
{
    int v,i;



    for(i=0;i<G[n].size();i++)
        {
           v=G[n][i];

            if(Vst[v]!=1)
         {   Vst[v]=1;
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


      while(cin>>m)
      {
       if(m==0)
       break;

         while(cin>>a&&a)
         {


          G[m].push_back(a);

         }


      }

      cin>>t;
      for(i=0;i<t;i++)
      {
        scanf("%d",&inp[i]);
      }


     for(i=0;i<t;i++)
      {

            DFS(inp[i]);
            int cnt=0;
            for(j=1;j<=n;j++)
            {
             if(!Vst[j])
             cnt++;

            }
            printf("%d",cnt);

            for(j=1;j<=n;j++)
            {
             if(!Vst[j])
             printf(" %d",j);


            }
            printf("\n");
            memset(Vst,0,mx);


      }
     for(j=1;j<=n;j++)
                G[i].clear();



}
}
