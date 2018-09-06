#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;

int MT[205][205];
int V[205];

vector<int>G[205];
pair<int,int>w[100];
int st;

int DFS(int n,int x)
{
    // if(st==0){
       // if(V[n]>2)
         //   return -1;
       // else if(V[n]==1||V[n]==2)
          //  return 1;
       // else
       //     V[n]++;
   // }
   if(st==0){
          if(n==x)
              return -1;

             }
             else
                st=0;            //V[n]++;
        int ret,v;

      for(int i=0;i<G[n].size();i++)
        {
            v=G[n][i];  cout<<v<<endl;
            ret=DFS(v,x);
            if(ret==-1)
                return -1;

        }

         return 1;

}


int main()
{
     int n,l,i,j,k,a,b,flag,r;

    while(cin>>n)
    {

       if(n==0)
        break;

        cin>>l;
        for(i=0;i<l;i++)
        {
            cin>>a>>b;
            MT[a][b]=1;
            MT[b][a]=1;
          // G[a].push_back(b);
          // G[b].push_back(a);

        }
      r=0;
        for(i=0;i<n;i++)
        {
            st=1;
           r=DFS(i,i);
            if(r==-1)
                break;

                for(j=0;j<205;j++)
                  V[j]=0;

        }
        if(r==-1)
            cout<<"NO"<<endl;
        else
            cout<<"Yes"<<endl;



      for(i=0;i<205;i++)
         {
             G[i].clear();
             V[i]=0;
         }
    }
}
