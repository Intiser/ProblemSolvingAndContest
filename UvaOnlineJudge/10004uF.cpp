#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>

using namespace std;

int V[220],flag;
vector<int>M[220];

void dfs(int x,int y)
{



     if(flag==1)
      return;

    V[x]=y;
     y=-y;

    for(int i=0;i<M[x].size();i++)
    {
        int v=M[x][i];


       if(V[v]==0)
         {

                dfs(v,y);

         }
         else if(V[v]==V[x])
          {

              flag=1;
              return ;
          }

    }
    return ;

}


int main()
{
    int n,l,a,b;
    int i,j,k;

    while(cin>>n)
    {
        if(n==0)
            break;

       cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a>>b;
            M[a].push_back(b);
            M[b].push_back(a);

        }

        for(i=0,j=1;i<n;i++)
        {
            flag=0;
            if(V[i]!=0)
             j=V[i];

            dfs(i,j);

            if(flag==1)
                break;



        }




        if(flag==1)
            printf("NOT BICOLORABLE.\n");
        else
            printf("BICOLORABLE.\n");

           for(i=0;i<220;i++)
           {
               M[i].clear();
               V[i]=0;
           }


    }

}
