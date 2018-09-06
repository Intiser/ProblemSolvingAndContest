#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<cstring>

using namespace std;

#define mx 100005



int Vi[mx];
vector<int>G[mx];

int Vst[mx];

void DFS(int n)
{
    int v,i;

    Vi[n]=1;

    for(i=0;i<G[n].size();i++)
        {
           v=G[n][i];
           //cout<<v<<endl;
           Vst[v-1]=1;
            if(Vi[n]!=1)
             DFS(v);


        }
        return ;


}



int main()
{
   int n,m,i,j,k,a,t,inp[mx];
   while(cin>>n)
   {
        if(n==0)
        break;

      while(cin>>m)
      {
       if(m==0)
       break;

         while(cin>>a)
         {
         if(a==0)
           break;

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
            for(j=0;j<n;j++)
            {
             if(Vst[j]==0)
             cnt++;

            }
            printf("%d",cnt);

            for(j=0;j<n;j++)
            {
             if(Vst[j]==0)
             printf(" %d",j+1);

               // Vst[j]=0;
                //Vi[j]=0;

            }
            printf("\n");
            memset(Vst,0,mx);
            memset(Vi,0,mx);


      }
      for(i=0;i<105;i++)
        G[i].clear();

   }

}
